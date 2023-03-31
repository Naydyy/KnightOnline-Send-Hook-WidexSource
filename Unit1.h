//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <CheckLst.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTimer *clientPencereAktif;
	TButton *Button1;
	TButton *Button2;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TTimer *Rogue;
	TButton *Button3;
	TLabel *Label3;
	TTimer *tt;
	TLabel *Label9;
	TTimer *slotkayit;
	TListBox *ListBox3;
	TListBox *ListBox4;
	TEdit *xx1;
	TEdit *yy1;
	TTimer *slotagit;
	TButton *Button13;
	TTimer *mobbekle;
	TButton *Button12;
	TBitBtn *BitBtn4;
	TListBox *ListBox2;
	TLabel *Label10;
	TCheckBox *CheckBox5;
	TGroupBox *GroupBox4;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TLabel *Label14;
	TLabel *Label15;
	TPageControl *PageControl2;
	TTabSheet *TabSheet6;
	TCheckBox *CheckBox1;
	TEdit *Edit2;
	TButton *Button6;
	TTabSheet *TabSheet7;
	TCheckBox *CheckBox3;
	TTabSheet *TabSheet8;
	TCheckBox *CheckBox2;
	TMemo *Memo2;
	TButton *Button7;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TCheckListBox *CheckListBox1;
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TEdit *Edit1;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton5;
	TGroupBox *GroupBox2;
	TLabel *Label2;
	TButton *Button4;
	TEdit *Edit3;
	TButton *Button5;
	TListBox *ListBox1;
	TGroupBox *GroupBox3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TCheckBox *CheckBox4;
	TEdit *Edit4;
	TBitBtn *BitBtn3;
	TShape *Shape1;
	TEdit *Edit9;
	TLabel *Label16;
	TButton *Button14;
	TTabSheet *TabSheet9;
	TLabel *Label17;
	TEdit *Edit10;
	TLabel *Label18;
	TEdit *Edit11;
	TLabel *Label19;
	TEdit *Edit12;
	TLabel *Label20;
	TEdit *Edit13;
	TLabel *Label21;
	TEdit *Edit14;
	TLabel *Label22;
	TEdit *Edit15;
	TButton *Button15;
	TButton *Button16;
	TButton *Button10;
	TEdit *Edit5;
	TButton *Button11;
	TButton *Button8;
	TButton *Button9;
	TTabSheet *TabSheet1;
	TButton *Button17;
	TButton *Button18;
	TButton *Button19;
	TButton *Button20;
	TLabel *Label23;
	TButton *Button21;
	TLabel *Label24;
	TButton *Button22;
	TLabel *Label25;
	TLabel *Label26;
	TButton *Button23;
	TTimer *Timer1;
	TButton *Button24;
	TButton *Button25;
	TButton *Button26;
	TButton *Button27;
	TButton *Button28;
	TTimer *asasattack;
	TButton *Button29;
	TButton *Button30;
	TGroupBox *GroupBox5;
	TTrackBar *hpbar;
	TTrackBar *mpbar;
	TLabel *Label27;
	TLabel *Label28;
	TCheckBox *CheckHP;
	TCheckBox *CheckMP;
	TLabel *Label29;
	TLabel *Label30;
	TTimer *usepot;
	TTimer *Minor;
	TLabel *Label31;
	TTrackBar *minorBar;
	TLabel *Label32;
	TCheckBox *CheckMinor;
	TEdit *Edit16;
	TLabel *Label33;
	TGroupBox *GroupBox6;
	TCheckBox *CheckBox6;
	TCheckBox *CheckBox7;
	TCheckBox *CheckBox8;
	void __fastcall clientPencereAktifTimer(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall RogueTimer(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall ListBox1DblClick(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall CheckBox3Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall BitBtn3Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall ttTimer(TObject *Sender);
	void __fastcall CheckBox4Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall slotkayitTimer(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall BitBtn4Click(TObject *Sender);
	void __fastcall slotagitTimer(TObject *Sender);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall CheckBox5Click(TObject *Sender);
	void __fastcall mobbekleTimer(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall Button20Click(TObject *Sender);
	void __fastcall Button21Click(TObject *Sender);
	void __fastcall Button22Click(TObject *Sender);
	void __fastcall Button23Click(TObject *Sender);
	void __fastcall Button24Click(TObject *Sender);
	void __fastcall Button25Click(TObject *Sender);
	void __fastcall Button26Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall Button27Click(TObject *Sender);
	void __fastcall Button28Click(TObject *Sender);
	void __fastcall asasattackTimer(TObject *Sender);
	void __fastcall CheckListBox1Click(TObject *Sender);
	void __fastcall Button29Click(TObject *Sender);
	void __fastcall Button30Click(TObject *Sender);
	void __fastcall hpbarChange(TObject *Sender);
	void __fastcall mpbarChange(TObject *Sender);
	void __fastcall usepotTimer(TObject *Sender);
	void __fastcall CheckHPClick(TObject *Sender);
	void __fastcall CheckMPClick(TObject *Sender);
	void __fastcall minorBarChange(TObject *Sender);
	void __fastcall CheckMinorClick(TObject *Sender);
	void __fastcall MinorTimer(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
