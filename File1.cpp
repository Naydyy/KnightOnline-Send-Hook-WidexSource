#include <vcl.h>
#include <windows.h>
#include "Unit1.h"


DWORD	  KOGelenPaketFonksiyon_PTR  		= 0xB8F540;   // ???
DWORD	  KOGelenPaketFonksiyon				= 0;


 __inline DWORD RDWORD(DWORD ulBase)
{
   if (!IsBadReadPtr((VOID*)ulBase, sizeof(DWORD)))
	{
	      return(*(DWORD*)(ulBase));
	}
	return 0;
}


int WINAPI GUILOAD()
{
	try{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->Run();


    }catch(...){
	}
	return 0;
}


void __stdcall FakeFunction()
{

*(DWORD*)KOGelenPaketFonksiyon_PTR = (DWORD)KOGelenPaketFonksiyon;

Form1 = new TForm1(NULL);
Application->CreateForm(__classid(TForm1),&Form1);
Form1->Show();
//Form1->Update();


}


__declspec (naked) void ThreadFakeCall()
{
	_asm{
		pushad
		call FakeFunction
		popad
		jmp dword ptr[KOGelenPaketFonksiyon]
	}
}




int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void* lpReserved)
{

    switch( reason )
    {
	case DLL_PROCESS_ATTACH:
	  // KOGelenPaketFonksiyon = RDWORD(KOGelenPaketFonksiyon_PTR);
	 //	*(DWORD*)KOGelenPaketFonksiyon_PTR = (DWORD)ThreadFakeCall;
          Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->Run();
		//CreateThread(0,0,(LPTHREAD_START_ROUTINE)GUILOAD,0,0,0);
        break;

	case DLL_THREAD_ATTACH:
		break;

	case DLL_THREAD_DETACH:
        break;

	case DLL_PROCESS_DETACH:

        break;
    }
		return TRUE;

	return 1;

}


