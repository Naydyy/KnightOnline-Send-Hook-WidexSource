//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <math.h>
#include "Unit1.h"
#include "AutoF.h"
#include "Quest.h"
#include "Pointers.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"



TForm1 *Form1;
	int bBotStatus;

	int iServerCheckCounter;
	int	iPutKeyCounter;
	int iCheckTick;

	int		iSHBoost;
	int 	iSHDelay;
	int		iSkillIndex;
	bool	bBonus3_1;
	bool	bBonus5_1;
	bool	bBonus3;
	bool	bBonus5;
	int		iMobCount;
	char*	strMobList[10];
	int		iBonusDistance;
	int		iTargetingType;
	int		iAttackDelay;
	bool	bShowEffect;
	bool   	bShowMob;
	bool	bWaitForKill;
	bool	bMinor;
	bool	bMana;
	bool	bHP;
	DWORD	dwManaSkillNum;
	DWORD	dwManaItemNum;
	DWORD	dwHPSkillNum;
	DWORD	dwHPItemNum;
	int		iManaType;
	int		iManaLimit;
	int		iHPType;
	int		iHPLimit;
	bool 	bWolf;
	bool	bTS;
	bool	bSprint;
	bool	bHide;
	bool	bScaled;
	bool	bCure;
	bool	bSW;
	bool	bEvade;
	bool	bLup;
	bool	bLF;
	bool	bSafety;
	bool	bCats;
	bool	bMoving;
	bool	bMovePaused;
	int		iMoveX[20];
	int		iMoveY[20];
	int		iMoveCount;
	int		iCurrentRoute;
	int		iLastPos;
	int		iChatDelay;
	int		iChatType;
	bool	bLoot;
	bool	bLootPaused;
	bool	bLootCoins;
	bool	bMoveToChest;
	int		iMaxChestDistance;
	int		iCenterX;
	int		iCenterY;
	bool	bLootUnique;
	bool	bLootUpgrade;
	bool	bLootPriceLimit;
	int		iLootPriceLimit;
	int		iLootUpgradeLimit;
	bool	bLootList;
	int		iLootCount;
	long	lLootID[10];
	bool	bSund;
	bool	bPot;
	bool	bInn;
	bool	bBuyWolf;
	bool	bBuyArrow;
	bool	bBuyMana;
	int		iBuyManaLimit;
	bool	bBuyHP;
	int		iBuyHPLimit;
	int		iInnBeginSlot;
	bool	bInnDepot;
	bool	bFollowLeader;
	bool	bFollowSelected;
	bool	bAutoParty;
	bool	bAutoInvite;
	bool	bTownOnGM;
	bool	bTownOnMob;
	bool	bTownOnBl;
	bool	bPmControl;
	int		iPmControlCount;
	bool	bDcOnBl;
	bool	bTownOnNoTS;
	bool	bTownOnNoArrow;
	bool	bTownOnNoMana;
	bool	bTownOnNoParty;
	bool	bRingOnDie;
	bool	bRingOnTown;
	bool	bInformAfterSupply;
	bool	bTownOnMinPartyMember;
	int		iMinPartyMember;
	int		iLastMinPartyTick;
	bool	bTownOnNoPriest;
    int		iLastTownOnNoPriTick;

	int		iLastMinorTick;
	int		iLastManaTick;
	int		iLastHPTick;
	int		iLastWolfTick;
	int		iLastTSTick;
	int		iLastSprintTick;
	int		iLastHideTick;
	int		iLastScaledTick;
	int		iLastCureTick;
	int		iLastSWTick;
	int		iLastEvadeTick;
	int		iLastLupTick;
	int		iLastLFTick;
	int		iLastSafetyTick;
	int		iLastCatsTick;
	int		iLastMage62Tick;

	int		iLastAttackTick;

	WORD	wLastTarget;

	DWORD	dwCastNum;
	DWORD	dwCastNum_3;
	DWORD	dwCastNum_5;

	bool	bWaitingNewDrop;

	DWORD	dwLastChestID;
	float	fLastChestDist;

	char*	strAlertMobList[10];
	int		iAlertMobCount;

	HWND	mciAlarm;

	bool	bOnSundWay;
	bool	bOnPotWay;
	bool	bOnInnWay;

	int		iSundCount;
	int		iSundX[20];
	int		iSundY[20];

	int		iPotCount;
	int		iPotX[20];
	int		iPotY[20];

	int		iInnCount;
	int		iInnX[20];
	int		iInnY[20];

	int		iSundLastPos;
	int		iSundRoute;
	int		iPotLastPos;
	int		iPotRoute;
	int		iInnLastPos;
	int		iInnRoute;

	bool	bBotPaused;

	bool	bMinimized;

	bool	bChatTP;
	bool	bLimitTP;
	int		iTPLimit;
	bool	bAutoGate;
	int		iGateLimit;

	int		iLastTPTick;
	int		iLastGateTick;

	bool	bAntiFreeze;

	bool	bMage62;

	DWORD	dwCastNum18;
	DWORD	dwCastNum33;
	DWORD	dwCastNum43;
	DWORD	dwCastNum45;
	DWORD	dwCastNum51;
	DWORD	dwCastNum54;
	DWORD	dwCastNum56;
	DWORD	dwCastNum57;
	DWORD	dwCastNum60;
	DWORD	dwCastNum70;

	int		iSkillType_18;
	int		iSkillType_33;
	int		iSkillType_43;
	int		iSkillType_45;
	int		iSkillType_51;
	int		iSkillType_54;
	int		iSkillType_56;
	int		iSkillType_57;
	int		iSkillType_60;
	int		iSkillType_70;

	bool	bCast18;
	bool	bCast33;
	bool	bCast45;
	bool	bCast51;
	bool	bCast54;
	bool	bCast57;
	bool	bCast60;
	bool	bCast70;

	bool	bMageCloseAttack;
	int		iSkillIndex_CloseAttack;

	int		iLastCastTick_18;
	int		iLastCastTick_33;
	int		iLastCastTick_45;
	int		iLastCastTick_51;
	int		iLastCastTick_54;
	int		iLastCastTick_57;
	int		iLastCastTick_60;
	int		iLastCastTick_70;

	long	lMageCastData18;
	long	lMageCastData33;
	long	lMageCastData43;
	long	lMageCastData45;
	long	lMageCastData51;
	long	lMageCastData54;
	long	lMageCastData56;
	long	lMageCastData57;
	long	lMageCastData60;
	long	lMageCastData62;
	long	lMageCastData70;

	bool	bOnlyEnemy;
	bool	bOnlyTarget;

	int		iLastDurabilityL;
	int		iLastDurabilityR;

	bool	bFormLoaded;

	int		iLastChestTick;

	bool	bPriestMembers[8];
	bool	bPriestHeal;
	int		iHealType;
	int		iHealCastIndex;
	int		iHealLimit;
	bool	bHealLessHPFirst;
	bool	bBuff;
	bool	bAC;
	bool	bResist;
	int		iBuffCastIndex;
	int		iACCastIndex;
	int		iResistCastIndex;
	bool	bGroupHeal;
	bool	bRestore;
	int		iGroupCastIndex;
	int		iRestoreCastIndex;
	bool	bMalice;
	bool	bParasite;
	bool	bTorment;
	bool	bMassive;
	bool	bChatHeal;
	bool	bChatBuff;
	bool	bChatAC;
	bool	bChatResist;
	bool	bSitWhenIdle;
	bool	bPriAutoCure;
	bool	bPriAutoSTR;
	bool	bPriAutoBook;
	bool	bPriestPaused;

	int		iLastHealTick;
	int		iLastBuffTick;
	int		iLastACTick;
	int		iLastResistTick;
	int		iLastGroupTick;
	int		iLastRestoreTick;
	int		iLastMaliceTick;
	int		iLastParasiteTick;
	int		iLastTormentTick;
	int		iLastMassiveTick;
	int		iLastPriCureTick;
	int		iLastPriDiseaseTick;
	int		iLastPriSTRTick;
	int		iLastPriBookTick;

	int		iLastUserMaxHP[8];
	int		iLastBuffedUserTick[8];
	bool	bUserWaitingForNewHP[8];
	int		iLastRestoredUserTick[8];

	bool	bPriPrintName;
	bool	bUndyForWarriors;

	DWORD	dwPriHealCastNum;
	DWORD	dwPriBuffCastNum;
	DWORD	dwPriACCastNum;
	DWORD	dwPriResistCastNum;
	DWORD	dwPriGroupCastNum;
	DWORD	dwPriRestoreCastNum;
	DWORD	dwPriCureCastNum;
	DWORD	dwPriDiseaseCastNum;
	DWORD	dwPriSTRCastNum;
	DWORD	dwPriUndyCastNum;

	bool	bHealCastArray[8];
	DWORD	dwHealCastArray[8];

	bool	bRAttack;
	bool	bRunToMob;
	int		iRunDist;
	bool	bRock;
	bool	bAsasPercent5;
	bool	bAsasPercent10;
	bool	bBinding;
	bool	bProvoke;
	bool	bPriestAttack;
	int		iPriestAttackType;
	bool	bLightStrike;
	bool	bLightCounter;
	bool	bBrightness;
	bool	bCriticalLight;
	bool	bLightAttack;
	bool	bSTR30;
	bool	bAsasAttack;
	bool	bDebuff;

	bool	bSprintWarrior;
	bool	bDefenseWarrior;
	bool	bGainWarrior;

	bool	bAsasCastArray[12];
	DWORD	dwAsasCastArray[12];
	int		iLastAsasCastTick[12];
	int     iLastPotTick[2];

	int		iLastAsasAttackTick;
	int		iLastRockTick;
	WORD	wLastRockTarget;

	int		iBotCenterX;
	int		iBotCenterY;

	int		iLastRAttackTick;
	int		iRTimer;

	DWORD	dwPercent10Num;
	DWORD	dwPercent5Num;

	int		iLastPercent10Tick;
	int		iLastPercent5Tick;

	DWORD	dwWarriorCastArray[18];
	int		iWarriorCastIndex;
	DWORD	dwBindingCastNum;
	DWORD	dwProvokeCastNum;

	int		iLastWarriorAttackTick;
	int		iLastBindingTick;
	int		iLastProvokeTick;
	WORD	wLastBindingTarget;

	int		iLastDefenseTick;
	int		iLastGainTick;

	bool	bWarriorAttack;

	bool	bPriestCastArray[8];
	DWORD	dwPriestCastArray[8];
	int		iLastPriestCastTick[8];
	int		iPriestCastIndex;
	int		iLastPriestAttackTick;
	DWORD	dwPriestSTR30CastNum;
	int		iLastPriestSTR30Tick;

	int		iLastPriestFarCastTick[5];
	DWORD	dwPriestFarCastArray[5];

	int		iLastPriestDebuffTick[4];
	DWORD	dwPriestDebuffArray[4];
	int		iLastPriestDebuffCastTick;

	int		iPriestMyLastRestoreTick;
	int		iPriestMyLastBuffTick;
	int		iPriestMyLastACTick;
	int		iPriestMyLastResistTick;
	int		iPriestMyLastSTRTick;

	int		iPriestHealLockIndex;

	bool	bMoveChestPaused;
	bool	bRunMobPaused;

	bool	bBotState;
	bool	bArcheryAttack;

	bool	bAutoRevive;

	bool	bFollowMaster;
	WORD	wFollowId;

	bool	bAutoSell;
	bool	bSellSlotLimit;
	int		iSellBeginSlot;
	bool	bSellPriceLimitAbove;
	int		iSellPriceLimitAbove;
	bool	bSellPriceLimitLess;
	int		iSellPriceLimitLess;

	bool	bSellWaitForRPR;
	bool	bRouteSH;
	bool	bStunChar;

	int		iMinorLimit;

	float	fLastMovedX;
	float	fLastMovedY;

	bool	bBuyTS;
	bool	bBuyBook;
	bool	bBuyRock;
	int		iBuyTS;
	int		iBuyBook;
	int		iBuyRock;

	bool	bArcheryCastArray[20];
	DWORD	dwArcheryCastArray[20];
	int		iArcheryCastArray[20];
	DWORD	dwCastNum_Blow;
	bool	bBlow;

	bool	bMageBasicCastArray[5];
	DWORD	dwMageBasicCastArray[5];
	int		iMageBasicCastArray[5];
	int		iMageBasicDataArray[5];

	bool	bMageFlameCastArray[21];
	DWORD	dwMageFlameCastArray[21];
	int		iMageFlameCastArray[21];
	int		iMageFlameDataArray[21];

	bool	bMageIceCastArray[21];
	DWORD	dwMageIceCastArray[21];
	int		iMageIceCastArray[21];
	int		iMageIceDataArray[21];

	bool	bMageLightCastArray[21];
	DWORD	dwMageLightCastArray[21];
	int		iMageLightCastArray[21];
	int		iMageLightDataArray[21];

	bool	bMageAttack;

	int		iWentToChestTime;
	bool	bOnChestWay;

	int		iLastArcheryBonusTick;

	bool	bFarChest;

	bool	bRingOnDC;
	bool	bCloseOnDC;

	bool	bFollowPaused;

	bool	bBuyMaster;
	int		iBuyMaster;

	bool 	bSuspendTurn;
	HANDLE	hGameThread;
	HANDLE	hRecvThread;
	DWORD	dwRecvThread;
	bool	bRecvThreadOpened;

	char*	strAddList[20];
	int		iAddCount;

	char*	strBlList[20];
	int		iBlCount;


	HMENU	hMainMenu;
	int		iActiveMin;

	WNDPROC dwSelfWndProc;
	WNDPROC dwGameWndProc;

	DWORD dwLastTPTPacketTick;

	bool	bNoTrade;
	bool	bNoParty;
	bool	bNoCombat;

	int		iSuspendMin;

	HWND	hWindowArray[8];
	HWND	hPopupArray[8];

	bool	bGetInnHP;
	bool	bGetInnMP;
	int		iGetInnHP;
	int		iGetInnMP;

	bool	bSaveCPU;
	int		iSleepRatio;
	long   	lRecvLastSleep;

	bool	bLegalAttack;
	bool	bPartySW;

	int 	iLastPTSWTick;
	int		iLastBonus5Tick;

	bool	bAttackWithLeader;

	bool	bKSMod;

	bool	bAutoMeat;
	int		iLastMeatTick;

	bool	bStickSH;

	int		iSubTargetingType;
	int		iTargetMobIDCount;
	int		iTargetMobID[20];
	bool	bTargetMobIdMob;
	int		iTargetNickCount;
	char*	strTargetNick[10];

	int		iMenuIDArray[96];

	bool	bAttackLeader;
	DWORD	dwPopupBase;
	int		iJailCount[12];

	bool	bOkcuDCFix;
	int		iLastPTRefreshTick;
	BYTE Yollanacak[1024];
	int YollanacakLen;
	bool multimod;
	bool bQuesBlock;
	String Path;
	bool bmadenislemci;
BYTE pBuf_RAttack[10] = {0x08,0x01,0x01,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00};     //08 01 01 BD43 77 00 03 00 00 01
BYTE	pBuf_Attack1[26] = {0x31,0x01,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE	pBuf_Attack2[26] = {0x31,0x02,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE	pBuf_Attack3[26] = {0x31,0x03,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE	pBuf_Attack4[26] = {0x31,0x04,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
void CastRAttack(DWORD ID);
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	bool bRAttack			=	false;
	bRunToMob			=	false;
	iRunDist          	=	10;
	bRock				=	false;
	bAsasPercent5		=	false;
	bAsasPercent10		=	false;
	bBinding			=	false;
	bProvoke			=	false;
	bPriestAttack		=	false;
	iPriestAttackType 	=	1;
	bLightStrike		=	false;
	bLightCounter		=	false;
	bBrightness			=	false;
	bCriticalLight		=	false;
	bLightAttack		=	false;
	bSTR30				=	false;
	bAsasAttack			=	false;
	bDebuff				=	false;
    iAttackDelay		=	1300;
	bSprintWarrior		=	false;
	bDefenseWarrior		=	false;
	bGainWarrior		=	false;

	for (int i = 0; i < 9; i++) {
		bAsasCastArray[i] = false;
		dwAsasCastArray[i] = 0;
		iLastAsasCastTick[i] = 0;
	}
	for (int i = 0; i < 2; i++) {

		iLastPotTick[i] = 0;
	}

	iLastAsasAttackTick	=	0;
	iLastRockTick	 	=	0;
	wLastRockTarget	=	0;

	iBotCenterX			=	0;
	iBotCenterY			=	0;

	iLastRAttackTick   	=	0;

	dwPercent10Num		=	0;
	dwPercent5Num		=	0;

	iLastPercent10Tick	=	0;
	iLastPercent5Tick	=	0;
}
//---------------------------------------------------------------------------
DWORD KOFonksiyonGame_PTR;
DWORD KOFonksiyonGame;
DWORD LastBoxID;
DWORD LASTBOX;
BYTE* packets;
size_t sizes;
DWORD pushdegsyo;
WORD Mob;
int mobsay = 1;
int lastDist;
int kordinat_say;
bool DeadMob = true;
const int PACKET_KUTUDUSTU = 0x23;
const int PACKET_KUTUACILDI = 0x24;
void UnSendHook();
void SendHook();

void send(BYTE* pBuf,int len) {
	__asm{
	MOV ECX,KO_PTR_PKT
	MOV ECX,DWORD PTR DS:[ECX]
	PUSH len
	PUSH pBuf
	MOV EAX,KO_SND_FNC
	CALL EAX
	}
 }

 void selectmob(){
     __asm{
	 MOV ECX,KO_PTR_DLG
	 MOV ECX,DWORD PTR DS:[ECX]
	 MOV EAX,KO_FNCZ
	 CALL EAX
	 }
 }


 //steam için 0x42C olan yer 0x414 olacak

 void SendSkill (DWORD sid, DWORD mobidcharid) {
 try{
__asm{
MOV ECX, KO_SMMB
MOV ECX, DWORD PTR DS: [ECX]
PUSH 0
PUSH sid
MOV EDI,KO_FNSB
CALL EDI
MOV ESI, EAX
MOV EDX, KO_PTR_DLG
MOV EDX, DWORD PTR DS: [EDX]
MOV ECX, DWORD PTR DS: [EDX + 0x42C]
PUSH ESI
PUSH mobidcharid
MOV EAX,KO_SFNC
CALL EAX
}
}catch(...){
}
}

DWORD GetSkillBase(DWORD skillid)
{
     DWORD skillbase;
	_asm
	{
		mov ecx,[KO_SMMB] //smmb
		mov ecx,dword ptr ds:[ecx]
		push skillid
		mov eax,KO_FNSB     //fnsb
		call eax
		mov skillbase,eax
	}

  return skillbase;
}


DWORD GetMobBase(DWORD targetID)
{
DWORD bRet;
		__asm{
		MOV ECX,KO_FLDB
		MOV ECX,DWORD PTR DS:[ECX]
		PUSH 1
		PUSH targetID
		MOV EAX,KO_FMBS
		CALL EAX
		MOV bRet,EAX
	}
return bRet;
}

DWORD ReadLong(DWORD ulBase)
{
   if (!IsBadReadPtr((VOID*)ulBase, sizeof(DWORD)))
	{
			return (*(DWORD*)(ulBase));
	}
	return 0;
}

char* ReadStr(DWORD ptr, long psize){
char* pstr=(char*) malloc(psize+2);
if (psize != 0 ){
ReadProcessMemory(GetCurrentProcess(), (LPVOID*) ptr, pstr, psize+1, NULL);
}
else{
pstr = "null";
}
return pstr;
}

void WriteFloat(HANDLE hProcess,DWORD addy,float Vaule){
WriteProcessMemory(hProcess, (LPVOID*)(DWORD) addy,&Vaule,4, NULL);
}

void WriteByte(HANDLE hProcess,DWORD addy,DWORD Vaule){
WriteProcessMemory(hProcess, (LPVOID*)(DWORD) addy,&Vaule,1, NULL);
}
void WriteLong(DWORD paddy, DWORD pval){
	__asm {
		mov ebx,paddy
		xor eax,eax
		mov eax,pval
		mov DWORD PTR DS:[ebx],eax
	}
}

bool MobListKontrol(String mob){
for(int x = 0; x <= Form1->ListBox1->Items->Count -1; x++){
  if(Form1->ListBox1->Items->Strings[x] == mob){
  return true;
   }
}
return false;
}

float GetDistance(float Locx,float Locy){
DWORD ADDR_CHR = ReadLong(KO_PTR_CHR);
float DisX = Locx -((*(FLOAT*)(ADDR_CHR+KO_OFF_X)));
float DisY = Locy - ((*(FLOAT*)(ADDR_CHR+KO_OFF_Y)));
float result = DisX * DisX + DisY * DisY;
return sqrt(result);
}

String MobName(DWORD Addr) {
String name="";
if(ReadLong(Addr + KO_OFF_NAMELEN) >= 16) {
name = ReadStr(ReadLong(Addr + KO_OFF_NAME),ReadLong(Addr + KO_OFF_NAMELEN));
}else{
name = ReadStr(Addr + KO_OFF_NAME,ReadLong(Addr + KO_OFF_NAMELEN));
}
return name;
}


BOOL isItInMyRange(FLOAT x, FLOAT y,FLOAT range) {
DWORD ADDR_CHR = ReadLong(KO_PTR_CHR);
float DisX = (float)x - ((*(FLOAT*)(ADDR_CHR+KO_OFF_X)));
float DisY = (float)y - ((*(FLOAT*)(ADDR_CHR+KO_OFF_Y)));
float result = DisX * DisX + DisY * DisY;
float DIS = sqrt(result);
if (DIS < range) {
return TRUE;
}
return FALSE;
}

float DistanceFark(float k1x, float k1y,float k2x,float k2y) {
float DisX = k1x - k2x;
float DisY = k1y - k2y;
float result = DisX * DisX + DisY * DisY;
return result;
}

void RunMove (float x, float y ){
if((int)GetDistance(x,y) > 1){
DWORD ADDR_CHR = ReadLong(KO_PTR_CHR);
WriteByte(GetCurrentProcess(),ADDR_CHR + KO_OFF_Go1,1);
WriteFloat(GetCurrentProcess(),ADDR_CHR + KO_OFF_GoX,x);
WriteFloat(GetCurrentProcess(),ADDR_CHR + KO_OFF_GoY,y);
WriteByte(GetCurrentProcess(),ADDR_CHR + 0x444,2);
}
}






void RunMove4 (float x, float y ){

DWORD ADDR_CHR = ReadLong(KO_PTR_CHR);
//WriteByte(GetCurrentProcess(),ADDR_CHR + KO_OFF_Go1,1);
WriteFloat(GetCurrentProcess(),ADDR_CHR + KO_OFF_GoX,x);
WriteFloat(GetCurrentProcess(),ADDR_CHR + KO_OFF_GoY,y);
//WriteByte(GetCurrentProcess(),ADDR_CHR + 0x3F0,2);

}

int ClassOku(){
WORD chrclass = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_CLASS);
return chrclass;
}

void SundiresItemAl(DWORD itemid,WORD itemslot,WORD itemAdet){
WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
BYTE itemAL [] = {0x21,0x01,0x18,0xE4,0x03,0x00,0,0,0x01,0,0,0,0,0x1B,0,0,0x01,0x02 };
memcpy(itemAL + 6,&mobid,2);
memcpy(itemAL + 9,&itemid,4);
memcpy(itemAL + 13,&itemslot,1);
memcpy(itemAL + 14,&itemAdet,2);
send(itemAL,sizeof(itemAL));
BYTE Ref[] ={0x6a,0x02};
send(Ref,sizeof(Ref));
}

void PotcuItemAl(DWORD potid,WORD itemslot,WORD potadet,WORD npcitemslotu){
WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
BYTE itemAL [] = {0x21,0x01,0x48,0xDC,0x03,0x00,0,0,0x01,0,0,0,0,0x1B,0,0,0x00,0x06 };
memcpy(itemAL + 6,&mobid,2);
memcpy(itemAL + 9,&potid,4);
memcpy(itemAL + 13,&itemslot,1);
memcpy(itemAL + 14,&potadet,2);
memcpy(itemAL + 17,&npcitemslotu,1);
send(itemAL,sizeof(itemAL));
BYTE Ref[] ={0x6a,0x02};
send(Ref,sizeof(Ref));
}

void SelectMob(WORD mob)
{
if(mob == 0) return;
   WriteLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB,mob);
}

WORD SearchNearblyMobsAddress() {
DWORD TargetAddress(0);
lastDist = 99;
WORD LastMob;
	for (int b=9999;b<0xFFFF;b++) {
	TargetAddress = GetMobBase(b);
	if (TargetAddress){
		float currentMobX=(*(FLOAT*)(TargetAddress+KO_OFF_X));
		float currentMobY=(*(FLOAT*)(TargetAddress+KO_OFF_Y));
	 //	WORD currentMob=(*(WORD*)(TargetAddress+KO_OFF_ID));
		if ((*(DWORD*)(TargetAddress + 0x6A8))==0) {
			if (isItInMyRange(currentMobX,currentMobY,99)) {
			String targetName = MobName(TargetAddress);
			   WORD mobhp = 1;
			   if((*(BYTE*)   ( TargetAddress + 0x2A4  )) == 0  && DeadMob == true &&  mobhp > 0 && /*GetTargetable(TargetAddress) == true && */ MobListKontrol(targetName) == true  )
			   {
			   int curDist = (int)GetDistance(currentMobX, currentMobY);
			   if( curDist  <  lastDist )
			   {
					LastMob = (*(WORD*)(TargetAddress+KO_OFF_ID));
					lastDist = curDist;
			   }
			   }
			 }
		   }
		}
	}
	SelectMob(LastMob);
return LastMob;
}


bool send2(String buf){
try {
if (buf.Length()<2) {
	return false;
}
int convertedlen = buf.Length()/2;
if (convertedlen*2!=buf.Length()) {
	return false;
}
BYTE Buffer[1024];
for (int i = 0; i < convertedlen; i++) {
BYTE bufnow = StrToIntDef("0x"+buf.SubString(i*2+1,2),0) ;
Buffer[i]=bufnow ;
}

send(Buffer,convertedlen);
} catch (...) {
	return false;
}
}

int WINAPI SendCall()
{
AnsiString hex;

for(size_t i = 0;i < sizes;i++)
	 hex += IntToHex((int)packets[i],2);
	 if(Form1->CheckBox2->Checked){
	 Form1->Memo2->Lines->Add(hex);

	 }
  
  return 0;
}

void  __declspec(naked) SendFunc()
{
   //	 DWORD adr = (DWORD)SendCall;
	_asm
	{
		pushad
		mov eax, [esp + 0x24]
		mov packets, eax
		mov ebx, [esp + 0x28]
		mov sizes, ebx
		call SendCall
		popad
		push -1
		push 0
		mov eax, KO_SND_FNC
		add eax,7
		jmp eax
	}
}
void  __declspec(naked) R3ACSSendFunc()
{
	_asm
	{
		//edit
	}
}

DWORD ReadLong(DWORD ulBase);

void SendHook()
{
	//pushdegsyo=ReadLong(KO_SND_FNC +3);
	BYTE jmp[] = { 0xB8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0 };
	//BYTE jmp[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
	DWORD adr = (DWORD)SendFunc;
	memcpy(jmp + 1, &adr, 4);
  // 	memcpy((void*)KO_SND_FNC, jmp, 7);
}
void UnSendHook()
{
	BYTE jmp[] = { 0xB8, 0x40, 0x6B, 0x00, 0x5B, 0xFF, 0xE0};  //E9 F4 3A 7C 00  ko4fun //r3acs = E9 9B 2F A1 57
	memcpy((void*)KO_SND_FNC, jmp, 7);
}


bool tekraryok = false;
String CharacterName();
HWND GetHwndProc()
{
	HWND hwnd = GetTopWindow(NULL);
	DWORD currentPID = GetCurrentProcessId();
	do{
		char title[256];
		if ((GetWindowText(hwnd, title, 256) > 0) && (IsWindowVisible(hwnd)))
		{
			DWORD procId;
			GetWindowThreadProcessId(hwnd, &procId);
			if (procId == currentPID){
			if(CharacterName() != "null"  && !tekraryok){
			Form1->Caption = String(currentPID) + " - " + CharacterName();
			tekraryok=true;
			}
			return hwnd;
			}
		}
	hwnd = GetNextWindow(hwnd, GW_HWNDNEXT);
	} while (hwnd);
}

String CharacterName() {
DWORD CHRB = ReadLong(KO_PTR_CHR);
String name="";
if(ReadLong(CHRB + KO_OFF_NAMELEN) >= 16) {
name = ReadStr(ReadLong(CHRB + KO_OFF_NAME),ReadLong(CHRB + KO_OFF_NAMELEN));
}else{
name = ReadStr(CHRB + KO_OFF_NAME,ReadLong(CHRB + KO_OFF_NAMELEN));
}
return name;
}

void KOTransferBox(DWORD pBoxID){
BYTE byBuff[100];
int iOffset =0;
LastBoxID=pBoxID;
MP_AddByte(byBuff, iOffset, 0x24);
MP_AddDword(byBuff, iOffset,pBoxID);
send(byBuff,iOffset);
}



void KOTransferLoot(DWORD LastBoxID,DWORD ItemID,BYTE itemslot){
BYTE byBuff[100];
int iOffset =0;
MP_AddByte(byBuff, iOffset, 0x26);
MP_AddDword(byBuff, iOffset,LastBoxID);
MP_AddDword(byBuff, iOffset,ItemID);
MP_AddByte(byBuff, iOffset, itemslot);
MP_AddByte(byBuff, iOffset, 0x00);
send(byBuff,iOffset);
}
void KOTransferParseBox(BYTE* pDataPack, int iOffset){
DWORD BoxID =Parse_GetDword(pDataPack, iOffset);
LASTBOX =BoxID;
DWORD drop_id[4];
DWORD toplalist[1];
for (int i = 0;i<4;i++){
drop_id[i] = *(DWORD*)(pDataPack+(6 + 6*i));
KOTransferLoot(BoxID,drop_id[i],i);
if(drop_id[i] != 0){
//Form1->Memo1->Lines->Add("Kutudan düşen item ID : " + String(drop_id[i]));
}
}
}


AnsiString PackLog(char *pack,int size){
String packet;
for(int i=0;i<size;i++){
BYTE converted = pack[i];
packet += IntToHex(converted,2);
}
return packet;
}


void GorevleriDagit(BYTE* buf, int bsize)
{
	AnsiString Paket = PackLog(buf,bsize);

	if(Paket == "64023C0003")
	{
		// worm bitti
	}


}





void RogueArchery(int Skill,WORD TransferSeciliMob){

WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
WORD TransferChrX = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_X);
WORD TransferChrY = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_Y);
WORD TransferClass = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_CLASS);

DWORD GonderilecekSkill = (TransferClass * 1000) + Skill;

BYTE p1 [] = {0x31,0x01,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00};
BYTE p2 [] = {0x31,0x02,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE p3 [] = {0x31,0x03,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE p4 [] = {0x31,0x04,0,0,0,0x00,0,0,0,0,0,0,0x05,0x00,0,0,0x9B,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

memcpy(p1 + 2,&GonderilecekSkill,3);
memcpy(p1 + 6,&TransferChrID,2);
memcpy(p1 + 8,&TransferSeciliMob,2);

memcpy(p2 + 2,&GonderilecekSkill,3);
memcpy(p2 + 6,&TransferChrID,2);
memcpy(p2 + 8,&TransferSeciliMob,2);
memcpy(p3 + 2,&GonderilecekSkill,3);
memcpy(p3 + 6,&TransferChrID,2);
memcpy(p3 + 8,&TransferSeciliMob,2);
memcpy(p4 + 2,&GonderilecekSkill,3);
memcpy(p4 + 6,&TransferChrID,2);
memcpy(p4 + 8,&TransferSeciliMob,2);
memcpy(p4 + 10,&TransferChrX,2);
memcpy(p4 + 14,&TransferChrY,2);
send(p1,sizeof(p1));
send(p2,sizeof(p2));
send(p3,sizeof(p3));
send(p4,sizeof(p4));
}

void Rogue3luOk(int Skill,WORD TargetID){

WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
WORD TransferChrX = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_X);
WORD TransferChrY = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_Y);
WORD TransferClass = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_CLASS);

DWORD GonderilecekSkill = (TransferClass * 1000) + Skill;
WORD EF = 65435;
WORD TransferChrZ = 0xFFFF;

BYTE pPacket[] = {0x31,0x01,0x73,0x8E,0x01,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00};
BYTE pPacket2[] = {0x31,0x02,0x73,0x8E,0x01,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00};
BYTE pPacket3[] = {0x31,0x03,0x73,0x8E,0x01,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE pPacket4[] = {0x31,0x04,0x73,0x8E,0x01,0x00,0,0,0,0,0x09,0x03,0x05,0x00,0x9F,0x01,0x9B,0xFF,0x00,0x00,0x00,0x00,0x00,0x00};



memcpy(pPacket + 2, &GonderilecekSkill,3 );
memcpy(pPacket +6,&TransferChrID,2);
memcpy(pPacket +8,&TargetID,2);

memcpy(pPacket2 + 2, &GonderilecekSkill,3 );
memcpy(pPacket2 +6,&TransferChrID,2);
memcpy(pPacket2 +8,&TargetID,2);

send(pPacket,sizeof(pPacket));
send(pPacket2,sizeof(pPacket2));

for (int i = 1; i < 4; i++){   // dc yememesi için.

memcpy(pPacket3 + 2, &GonderilecekSkill,3 );
memcpy(pPacket3 +6,&TransferChrID,2);
memcpy(pPacket3 +8,&TargetID,2);
memcpy(pPacket3 + 16,&i ,1);
send(pPacket3,sizeof(pPacket3));

memcpy(pPacket4 + 2, &GonderilecekSkill,3 );
memcpy(pPacket4 +6,&TransferChrID,2);
memcpy(pPacket4 +8,&TargetID,2);
memcpy(pPacket4+10,&TransferChrX,2);
memcpy(pPacket4+12,&TransferChrZ,2);
memcpy(pPacket4+14,&TransferChrY,2);
memcpy(pPacket4+16,&EF,2);
memcpy(pPacket4+18,&i,1);
send(pPacket4,sizeof(pPacket4));
}

}
void Transfer5LiOk(int Skill,WORD TargetID){

WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
WORD TransferChrX = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_X);
WORD TransferChrY = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_Y);
WORD TransferClass = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_CLASS);

DWORD GonderilecekSkill = (TransferClass * 1000) + Skill;
WORD EF = 65435;
WORD TransferChrZ = 0xFFFF;


BYTE pPacket[] =  {0x31,0x01,0x73,0x8E,0x01,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00};
BYTE pPacket2[] = {0x31,0x02,0x73,0x8E,0x01,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00};

BYTE pPacket3[] = {0x31,0x03,0x73,0x8E,0x01,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE pPacket4[] = {0x31,0x04,0x73,0x8E,0x01,0x00,0,0,0,0,0x09,0x03,0x05,0x00,0x9F,0x01,0x9B,0xFF,0x00,0x00,0x00,0x00,0x00,0x00};



memcpy(pPacket + 2, &GonderilecekSkill,3 );
memcpy(pPacket +6,&TransferChrID,2);
memcpy(pPacket +8,&TargetID,2);

memcpy(pPacket2 + 2, &GonderilecekSkill,3 );
memcpy(pPacket2 +6,&TransferChrID,2);
memcpy(pPacket2 +8,&TargetID,2);

send(pPacket,sizeof(pPacket));
send(pPacket2,sizeof(pPacket2));

for (int i = 1; i < 6; i++){   // dc yememesi için.

memcpy(pPacket3 + 2, &GonderilecekSkill,3 );
memcpy(pPacket3 +6,&TransferChrID,2);
memcpy(pPacket3 +8,&TargetID,2);
memcpy(pPacket3 + 16,&i ,1);
send(pPacket3,sizeof(pPacket3));

memcpy(pPacket4 + 2, &GonderilecekSkill,3 );
memcpy(pPacket4 +6,&TransferChrID,2);
memcpy(pPacket4 +8,&TargetID,2);
memcpy(pPacket4+10,&TransferChrX,2);
memcpy(pPacket4+12,&TransferChrZ,2);
memcpy(pPacket4+14,&TransferChrY,2);
memcpy(pPacket4+16,&EF,2);
memcpy(pPacket4+18,&i,1);
send(pPacket4,sizeof(pPacket4));
}
}


void __fastcall TForm1::clientPencereAktifTimer(TObject *Sender)
{

int State = GetWindowLong( GetHwndProc(), GWL_STYLE ) ;

switch( State ){
 case 0x36CA0000:   // Client Minimize Oldu
       this->WindowState = wsMinimized;
 break;
    case 0x16CA0000:   // Client Ekranda
    this->WindowState = wsNormal;
 break;
}


}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	send2("4800");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	TerminateProcess((void*)-1,0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{

  CheckListBox1->Clear();
  CheckListBox1->Items->Add("Archery");
  CheckListBox1->Items->Add("Through shot");
  CheckListBox1->Items->Add("Fire arrow");
  CheckListBox1->Items->Add("Posion arrow");
  CheckListBox1->Items->Add("Multiple shot");
  CheckListBox1->Items->Add("Arrow Shower");

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
Shape1->Brush->Color = clYellow;
if (RadioButton2->Checked) {
    asasattack->Interval=Edit1->Text.ToInt();
	asasattack->Enabled=true;
}
else
{
    Rogue->Enabled = true;
}

//Timer1->Enabled=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
	CheckListBox1->Clear();
	CheckListBox1->Items->Add("stroke");
	CheckListBox1->Items->Add("Stab");
	CheckListBox1->Items->Add("Stab 2");
	CheckListBox1->Items->Add("Jab");
	CheckListBox1->Items->Add("Pierce");
	CheckListBox1->Items->Add("Shock");
	CheckListBox1->Items->Add("Thrust");
	CheckListBox1->Items->Add("Cut");
	CheckListBox1->Items->Add("Spike");
	CheckListBox1->Items->Add("Bloody Beast");
	CheckListBox1->Items->Add("blinding");
	CheckListBox1->Items->Add("Beast Hiding");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
   //
	RadioButton1->Checked = true;
    //SendHook();
	Memo2->Clear();
	this->FormStyle = fsStayOnTop;




}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
 this->WindowState = wsMinimized;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
Shape1->Brush->Color = clRed;
Rogue->Enabled = false;
}
//---------------------------------------------------------------------------

int MSKontrol(int zaman)
{
	return (GetTickCount() - zaman);
}

int Archery1 = 0;
int Archery2 = 0;
int Stroke = 0;
int Stab = 0;
int Stab2 = 0;
int Jab = 0;

void __fastcall TForm1::RogueTimer(TObject *Sender)
{

WORD mobid;

if(RadioButton3->Checked)
selectmob();
mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
if(RadioButton5->Checked)
 mobid = SearchNearblyMobsAddress();

   if(mobid != 0xFFFF){

   if(RadioButton1->Checked){
   if(CheckListBox1->Checked[0] == true ){  RogueArchery(3,mobid);  }
   if(CheckListBox1->Checked[1] == true ){  if(MSKontrol(Archery1) > 1700){  RogueArchery(7,mobid);    Archery1 = GetTickCount();  } }
   if(CheckListBox1->Checked[2] == true ){  if(MSKontrol(Archery2) > 1500){  RogueArchery(500,mobid);  Archery2 = GetTickCount();  } }
   if(CheckListBox1->Checked[3] == true ){  RogueArchery(505,mobid);}
   if(CheckListBox1->Checked[4] == true ){  Rogue3luOk(515,mobid);}
   if(CheckListBox1->Checked[5] == true ){  Transfer5LiOk(555,mobid);}

   }

   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
//	SendHook();
 	send2(Edit2->Text);
 //  UnSendHook();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
Memo2->Clear();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBox1DblClick(TObject *Sender)
{
	ListBox1->Items->Delete(ListBox1->ItemIndex);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
ListBox1->Items->Add(Edit3->Text);

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button4Click(TObject *Sender)
{
WORD MOB = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
String name="";
if(MOB > 9999 && MOB != 0xFFFF)
{
DWORD Addr = GetMobBase(ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB));
String name="test";
if(ReadLong(Addr + KO_OFF_NAMELEN) >= 16) {
name = ReadStr(ReadLong(Addr + KO_OFF_NAME),ReadLong(Addr + KO_OFF_NAMELEN));
}else{
name = ReadStr(Addr + KO_OFF_NAME,ReadLong(Addr + KO_OFF_NAMELEN));
}

ListBox1->Items->Add(name);

}else{
   ListBox1->Items->Add(name);
}





}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
  if(CheckBox3->Checked){
  this->FormStyle = fsStayOnTop;
  }else{
      this->FormStyle = fsNormal;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
/*

worm görevi alırken giden paketler

20017C2CFFFFFFFF
41004A990A4400
640734000000
55001031333031335F5061747269632E6C7561
55001031333031335F5061747269632E6C7561FF

*/

send2( "640634000000" );

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{

/*
20017C2CFFFFFFFF
640733000000
55001031333031335F5061747269632E6C7561FF
*/


BYTE npcAc [] = { 0x20,0x01,0,0,0xFF,0xFF,0xFF,0xFF};
WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);

memcpy(npcAc + 2,&mobid,2);
send(npcAc,sizeof(npcAc));

send2("640733000000");
send2("55001031333031335F5061747269632E6C7561FF");

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
DWORD ADDR_CHR = ReadLong(KO_PTR_CHR);
WORD merkezx = (WORD)((*(FLOAT*)(ADDR_CHR+KO_OFF_X)));
WORD merkezy = (WORD)((*(FLOAT*)(ADDR_CHR+KO_OFF_Y)));

Label7->Caption = merkezx;
Label8->Caption = merkezy;



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{


WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
SendSkill(StrToInt(Edit5->Text),mobid);


}
//---------------------------------------------------------------------------

void __fastcall TForm1::ttTimer(TObject *Sender)
{

WORD slotx = StrToInt(Label7->Caption);
WORD sloty = StrToInt(Label8->Caption);
WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);

if(mobid != 0xFFFF){

DWORD basemob = GetMobBase(mobid);
WORD mobx = (WORD)((*(FLOAT*)(basemob+KO_OFF_X)));
WORD moby = (WORD)((*(FLOAT*)(basemob+KO_OFF_Y)));
int distance = StrToInt(Edit4->Text);

	if((int)DistanceFark(slotx,sloty,mobx,moby)  < distance){
	  if((int)GetDistance(mobx,moby) > 3 ){
			 RunMove(mobx,moby);
			 }
	  } else if((int)DistanceFark(slotx,sloty,mobx,moby)  > distance) {
		   	 RunMove(slotx,sloty);
	  }

   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
 //mobakos->Enabled = CheckBox4->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
	towntest();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::slotkayitTimer(TObject *Sender)
{
DWORD ADDR_CHR = ReadLong(KO_PTR_CHR);
WORD suanx = (WORD)((*(FLOAT*)(ADDR_CHR+KO_OFF_X)));
WORD suany = (WORD)((*(FLOAT*)(ADDR_CHR+KO_OFF_Y)));

ListBox2->Items->Add(String(suanx) +","+String(suany) );
ListBox3->Items->Add(suanx);
ListBox4->Items->Add(suany);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
ListBox2->Items->Clear();
ListBox3->Items->Clear();
ListBox4->Items->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
  if(BitBtn4->Caption == "KAYIT BAŞLAT")
  {
	  slotkayit->Enabled = true;
	  BitBtn4->Caption = "KAYIT DURDUR";
  }else{
	  slotkayit->Enabled = false;
	  BitBtn4->Caption = "KAYIT BAŞLAT";
	  kordinat_say = 0;
  }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::slotagitTimer(TObject *Sender)
{
		ListBox3->ItemIndex = kordinat_say;
		ListBox4->ItemIndex =  ListBox3->ItemIndex;
		String x1 = ListBox3->Items->Strings[ListBox3->ItemIndex];
		String y1 = ListBox4->Items->Strings[ListBox4->ItemIndex];

		xx1->Text = x1;
		yy1->Text = y1;

		String slot_x =  ListBox3->Items->Strings[ListBox3->Items->Count -1];
		String slot_y =  ListBox4->Items->Strings[ListBox4->Items->Count -1];

if((int)DistanceFark(StrToFloat(x1),StrToFloat(y1),StrToFloat(slot_x),StrToFloat(slot_y))  > 0)
	  {
			 RunMove(StrToFloat(x1),StrToFloat(y1));
      } else {
		  kordinat_say = 0;
		  BitBtn2Click(NULL);
		  mobbekle->Enabled = true;
		  slotagit->Enabled = false;
	  }
	  if((int)GetDistance(StrToFloat(xx1->Text),StrToFloat(yy1->Text)) <= 1)
	  {
			Button13Click(NULL);
	  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
	kordinat_say++;
	ListBox3->ItemIndex = kordinat_say;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox5Click(TObject *Sender)
{
	slotagit->Enabled = CheckBox5->Checked;
	mobsay = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::mobbekleTimer(TObject *Sender)
{
   if(mobsay > StrToInt(Edit6->Text))
   {
		 BitBtn1Click(NULL);  // ATAK DURDUR BUTONUNA TIKLA.
		 send2("48");  // town at.
		 Sleep(1000);
		 RunMove(StrToFloat(Edit7->Text),StrToFloat(Edit8->Text));
		 mobsay = 0;
		 mobbekle->Enabled = false;
   }

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button14Click(TObject *Sender)
{
BYTE pPacket[] = {0x31,0x03,0,0,0,0,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
WORD id = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);

DWORD skillid = StrToInt(Edit9->Text);
memcpy(pPacket + 2,&skillid,3);
memcpy(pPacket + 6,&id,2);
memcpy(pPacket + 8,&id,2);

send(pPacket,sizeof(pPacket));
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button15Click(TObject *Sender)
{
	DWORD skillbase = GetSkillBase(StrToInt(Edit5->Text));
  //	Edit2->Text = *(DWORD*)(skillbase + 0xC0);    //uzaklýk
	Edit1->Text = *(DWORD*)(skillbase + 0xA8);    //cooldown
 //	Edit3->Text = *(DWORD*)(skillbase + 0xA0);    //casting failed
	Edit4->Text = *(DWORD*)(skillbase + 0xA4);   //animasyon
  //	Edit7->Text = *(DWORD*)(skillbase + 0xB8);   //29. sütun 3. olan pot dðeerleri



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{

	DWORD skillbase = GetSkillBase(StrToInt(Edit5->Text));

	*(DWORD*)(skillbase + 0xC0) = StrToInt(Edit1->Text);    //uzaklýk
	*(DWORD*)(skillbase + 0xA4)= StrToInt(Edit2->Text);    //cooldown
	*(DWORD*)(skillbase + 0xA0)= StrToInt(Edit3->Text);    //casting failed
   //	*(DWORD*)(skillbase + 0x58)= StrToInt(Edit4->Text);   //animasyon
	*(DWORD*)(skillbase + 0xB8) = StrToInt(Edit7->Text);   //29. sütun 3. olan pot dðeerleri
}
//---------------------------------------------------------------------------

bool loadone;
void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
	 //  if(!loadone) AutoRecv(); loadone = true;
       // auto recv load.
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Button20Click(TObject *Sender)
{
WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
Label23->Caption = mobid;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button21Click(TObject *Sender)
{
 WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
 DWORD basemob = GetMobBase(mobid);

 Label24->Caption = basemob;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
{
 WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
 DWORD basemob = GetMobBase(mobid);

WORD mobx = (WORD)((*(FLOAT*)(basemob+KO_OFF_X)));
WORD moby = (WORD)((*(FLOAT*)(basemob+KO_OFF_Y)));

 Label25->Caption = mobx;

  Label26->Caption = moby;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{

 WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
 DWORD basemob = GetMobBase(mobid);

WORD mobx = (WORD)((*(FLOAT*)(basemob+KO_OFF_X)));
WORD moby = (WORD)((*(FLOAT*)(basemob+KO_OFF_Y)));

 RunMove(mobx,moby);


}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button24Click(TObject *Sender)
{
	BYTE npcAc [] = { 0x30,0x01,0,0,0x01};
	WORD mobid = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);

	memcpy(npcAc + 2,&mobid,2);
	send(npcAc,sizeof(npcAc));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button25Click(TObject *Sender)
{
   send2("300201");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button26Click(TObject *Sender)
{
send2("3005");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
SendHook();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button27Click(TObject *Sender)
{
SendHook();
 //league ko fix hapis
//UnSendHook();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button28Click(TObject *Sender)
{
 SendHook();
send2("1f02");
//UnSendHook();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::asasattackTimer(TObject *Sender)
{
WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
WORD TransferChrX = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_X);
WORD TransferChrY = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_Y);
WORD TransferClass = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_CLASS);

DWORD GonderilecekSkill;

BYTE p1 [] = {0x31,0x01,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00};
BYTE p2 [] = {0x31,0x02,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE p3 [] = {0x31,0x03,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE p4 [] = {0x31,0x04,0,0,0,0x00,0,0,0,0,0,0,0x05,0x00,0,0,0x9B,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
BYTE rAt [] = {0x08,0x01,0x01,0,0,0x77,0x00,0x03,0x00,0x00,0x00};//08 01 01 BD 43 77 00 03 00 00 01
DWORD	dwCurrentTick = GetTickCount();
bool bRAvailable = (bool)(dwCurrentTick - iLastRAttackTick >= 1250);
	bool bCastAble = (bool)(dwCurrentTick - iLastAsasAttackTick >= (DWORD)iAttackDelay);
	bool bTurnBeastHiding = (bool)(bCastAble && bAsasCastArray[11] && dwCurrentTick - iLastAsasCastTick[11] >= 40000);
	bool bTurnBilinding = (bool)(bCastAble && bAsasCastArray[10] && dwCurrentTick - iLastAsasCastTick[10] >= 60000);
	bool bTurnBloodyBeast = (bool)(bCastAble && bAsasCastArray[9] && dwCurrentTick - iLastAsasCastTick[9] >= 5200);
	bool bTurnSpike = (bool)(bCastAble && bAsasCastArray[8] && dwCurrentTick - iLastAsasCastTick[8] >= 11000);
	bool bTurnCut = (bool)(bCastAble && bAsasCastArray[7] && dwCurrentTick - iLastAsasCastTick[7] >= 5200);
	bool bTurnThrust = (bool)(bCastAble && bAsasCastArray[6] && dwCurrentTick - iLastAsasCastTick[6] >= 10000);
	bool bTurnShock = (bool)(bCastAble && bAsasCastArray[5] && dwCurrentTick - iLastAsasCastTick[5] >= 5200);
	bool bTurnPierce = (bool)(bCastAble && bAsasCastArray[4] && dwCurrentTick - iLastAsasCastTick[4] >= 10000);
	bool bTurnJab = (bool)(bCastAble && bAsasCastArray[3] && dwCurrentTick - iLastAsasCastTick[3] >= 6000);
	bool bTurnStab2 = (bool)(bCastAble && bAsasCastArray[2] && dwCurrentTick - iLastAsasCastTick[2] >= 6000);
	bool bTurnStab = (bool)(bCastAble && bAsasCastArray[1] && dwCurrentTick - iLastAsasCastTick[1] >= 6000);
	bool bTurnStroke = (bool)(bCastAble && bAsasCastArray[0]);

	bool bTurnPercent10 = (bool)(bCastAble && bAsasPercent10 && dwCurrentTick - iLastPercent10Tick >= 60000);
	bool bTurnPercent5 = (bool)(bCastAble && bAsasPercent5 && dwCurrentTick - iLastPercent5Tick >= 60000);
	wLastTarget = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MOB);
	if (wLastTarget!=0xFFFF) {
        
	
	if(bTurnPercent10){
		GonderilecekSkill = (TransferClass * 1000) + 650;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastPercent10Tick = dwCurrentTick;
	}

	if(bTurnPercent5 && !bTurnPercent10){
		GonderilecekSkill = (TransferClass * 1000) + 610;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastPercent5Tick = dwCurrentTick;
	}
	if(bTurnBeastHiding  && !bTurnPercent5 && !bTurnPercent10){
		GonderilecekSkill = (TransferClass * 1000) + 680;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[11] = dwCurrentTick;
	}
	if(bTurnBilinding && !bTurnBeastHiding && !bTurnPercent5 && !bTurnPercent10){
		GonderilecekSkill = (TransferClass * 1000) + 675;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[10] = dwCurrentTick;
	}
	if(bTurnBloodyBeast && !bTurnBilinding && !bTurnPercent5 && !bTurnPercent10){
		GonderilecekSkill = (TransferClass * 1000) + 670;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[9] = dwCurrentTick;
	}
	if(bTurnSpike && !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding  && !bTurnPercent5 && !bTurnPercent10){
		GonderilecekSkill = (TransferClass * 1000) + 655;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[8] = dwCurrentTick;
	}

	if(bTurnCut && !bTurnSpike && !bTurnPercent5 && !bTurnPercent10&& !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding){
		GonderilecekSkill = (TransferClass * 1000) + 640;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[7] = dwCurrentTick;
	}

	if(bTurnThrust && !bTurnCut && !bTurnSpike && !bTurnPercent5 && !bTurnPercent10&& !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding){
		GonderilecekSkill = (TransferClass * 1000) + 635;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[6] = dwCurrentTick;
	}

	if(bTurnShock && !bTurnThrust && !bTurnCut && !bTurnSpike && !bTurnPercent5 && !bTurnPercent10&& !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding){
		GonderilecekSkill = (TransferClass * 1000) + 620;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[5] = dwCurrentTick;
	}

	if(bTurnPierce && !bTurnShock && !bTurnThrust && !bTurnCut && !bTurnSpike && !bTurnPercent5 && !bTurnPercent10&& !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding){
		GonderilecekSkill = (TransferClass * 1000) + 615;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[4] = dwCurrentTick;
	}

	if(bTurnJab && !bTurnPierce && !bTurnShock && !bTurnThrust && !bTurnCut && !bTurnSpike && !bTurnPercent5 && !bTurnPercent10&& !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding){
		GonderilecekSkill = (TransferClass * 1000) + 600;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[3] = dwCurrentTick;
	}

	if(bTurnStab2 && !bTurnJab && !bTurnPierce && !bTurnShock && !bTurnThrust && !bTurnCut && !bTurnSpike && !bTurnPercent5 && !bTurnPercent10&& !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding){
		GonderilecekSkill = (TransferClass * 1000) + 006; //düzeltilecek buglu
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[2] = dwCurrentTick;
	}

	if(bTurnStab && !bTurnStab2 && !bTurnJab && !bTurnPierce && !bTurnShock && !bTurnThrust && !bTurnCut && !bTurnSpike && !bTurnPercent5 && !bTurnPercent10&& !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding){
		GonderilecekSkill = (TransferClass * 1000) + 005;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[1] = dwCurrentTick;
	}

	if(bTurnStroke && !bTurnStab && !bTurnStab2 && !bTurnJab && !bTurnPierce && !bTurnShock && !bTurnThrust && !bTurnCut && !bTurnSpike && !bTurnPercent5 && !bTurnPercent10&& !bTurnBloodyBeast && !bTurnBilinding && !bTurnBeastHiding){
		GonderilecekSkill = (TransferClass * 1000) + 001;
		memcpy(p3 + 2,&GonderilecekSkill,3);
		memcpy(p3 + 6,&TransferChrID,2);
		memcpy(p3 + 8,&wLastTarget,2);
		memcpy(rAt + 3,&wLastTarget,2);
		send(p3,sizeof(p3));
		send(rAt,sizeof(rAt));
		iLastAsasAttackTick = dwCurrentTick;
		iLastAsasCastTick[0] = dwCurrentTick;
	}
   }
}
void CastRAttack(DWORD ID){
	*(WORD*)(pBuf_RAttack + 3) = ID;
	send(pBuf_RAttack,10);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckListBox1Click(TObject *Sender)
{
	if (RadioButton2->Checked)
	{

		for (int i = 0; i < 12; i++)
		{
			bAsasCastArray[i] = CheckListBox1->Checked[i];
		}
	   //	asasattack->Enabled=true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button29Click(TObject *Sender)
{
  WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
  BYTE pothp [] = {0x31,0x03,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00};
  DWORD GonderilecekSkill = 500232;
		memcpy(pothp + 2,&GonderilecekSkill,3);
		memcpy(pothp + 6,&TransferChrID,2);
		memcpy(pothp + 8,&TransferChrID,2);
		send(pothp,sizeof(pothp));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button30Click(TObject *Sender)
{
   WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
  BYTE potmp [] = {0x31,0x03,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00};
  DWORD GonderilecekSkill = 610129;
		memcpy(potmp + 2,&GonderilecekSkill,3);
		memcpy(potmp + 6,&TransferChrID,2);
		memcpy(potmp + 8,&TransferChrID,2);
		send(potmp,sizeof(potmp));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::hpbarChange(TObject *Sender)
{

String b=hpbar->Position*10;
Label29->Caption=b;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::mpbarChange(TObject *Sender)
{
 String b=mpbar->Position*10;
Label30->Caption=b;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::usepotTimer(TObject *Sender)
{
DWORD	dwCurrentTick = GetTickCount();
bool bHP = (bool)( dwCurrentTick - iLastPotTick[0] >= 2100);//hp pot
bool bMP = (bool)( dwCurrentTick - iLastPotTick[1] >= 2100);//mp pot
if (CheckHP && bHP)
{
  WORD maxHP = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MAXHP);
  WORD curHP = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_HP);
  int HpTrack =hpbar->Position*10;
  int yuzde=((maxHP/100)* HpTrack);

  if (curHP<yuzde)
  {
		WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
		BYTE pothp [] = {0x31,0x03,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00};
		DWORD GonderilecekSkill = 500232;
		memcpy(pothp + 2,&GonderilecekSkill,3);
		memcpy(pothp + 6,&TransferChrID,2);
		memcpy(pothp + 8,&TransferChrID,2);
		send(pothp,sizeof(pothp));
		iLastPotTick[0] = dwCurrentTick;
  }
}
if (bMP && CheckMP)
{
  WORD maxMP = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MAXMP);
  WORD curMP = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MP);
  int MpTrack=mpbar->Position*10;
  int yuzde=((maxMP/100)* MpTrack);

  if (curMP<yuzde)
  {
      WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
		BYTE potmp [] = {0x31,0x03,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00};
		DWORD GonderilecekSkill = 610129;
		memcpy(potmp + 2,&GonderilecekSkill,3);
		memcpy(potmp + 6,&TransferChrID,2);
		memcpy(potmp + 8,&TransferChrID,2);
		send(potmp,sizeof(potmp));
		iLastPotTick[1] = dwCurrentTick;
  }
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckHPClick(TObject *Sender)
{
usepot->Enabled=true;	
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckMPClick(TObject *Sender)
{
usepot->Enabled=true;	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::minorBarChange(TObject *Sender)
{
String b=minorBar->Position*10;
Label32->Caption=b;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckMinorClick(TObject *Sender)
{
Minor->Interval=Edit16->Text.ToInt();
if (CheckMinor) {
	Minor->Enabled=true;
}
else
{
    Minor->Enabled=false;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::MinorTimer(TObject *Sender)
{
WORD TransferClass = (WORD)ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_CLASS);
if (CheckMinor)
{
  WORD maxHP = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_MAXHP);
  WORD curHP = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_HP);
  int MinorTrack =minorBar->Position*10;
  int yuzde=((maxHP/100)* MinorTrack);

  if (curHP<yuzde)
  {
		WORD TransferChrID = ReadLong(ReadLong(KO_PTR_CHR) + KO_OFF_ID);
		BYTE minor [] = {0x31,0x03,0,0,0,0x00,0,0,0,0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x00};
		DWORD GonderilecekSkill = (TransferClass * 1000) + 705;
		memcpy(minor + 2,&GonderilecekSkill,3);
		memcpy(minor + 6,&TransferChrID,2);
		memcpy(minor + 8,&TransferChrID,2);
		send(minor,sizeof(minor));
	   //	iLastPotTick[0] = dwCurrentTick;
  }
}
}
//---------------------------------------------------------------------------

