#pragma once

#include "global.h"
#include "anime.h"
#include "efxbattle.h"

struct ProcEfxMagicOBJ {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    STRUCT_PAD(0x30, 0x5C);
    /* 5C */ struct Anim * anim;
    /* 60 */ struct Anim * anim2;
    /* 64 */ ProcPtr seproc;
};

struct ProcEfxEclipseBG
{
    PROC_HEADER;

    /* 29 */ u8 unk29;
    STRUCT_PAD(0x2A, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    /* 30 */ s16 unk30;
    STRUCT_PAD(0x32, 0x44);
    /* 44 */ u32 frame;
    /* 48 */ const u16 * frame_config;
    /* 4C */ u16 ** tsal;
    /* 50 */ u16 ** tsar;
    /* 54 */ u16 ** img;
    /* 58 */ u16 * pal;
    /* 5C */ struct Anim * anim;
};

typedef void (*SpellAnimFunc)(struct Anim * anim);
extern CONST_DATA SpellAnimFunc gEkrSpellAnimLut[];

extern u32 FramScr_Unk5D4F90[];
extern CONST_DATA struct ProcCmd ProcScr_efxRestRST[];
extern CONST_DATA struct ProcCmd ProcScr_efxTwobaiRST[];
extern CONST_DATA struct ProcCmd ProcScr_DummvRST[];
extern CONST_DATA struct ProcCmd ProcScr_EfxRestWIN[];
extern CONST_DATA struct ProcCmd ProcScr_EfxRestWINH[];

ProcPtr NewefxRestRST(struct Anim * anim, int unk44, int unk48, int frame, int unk50);
void sub_805B444(struct ProcEfx * proc);
void efxRestRSTMain(struct ProcEfx * proc);
void NewEfxTwobaiRST(struct Anim * anim, int a);
void EfxTwobaiRSTMain(struct ProcEfx * proc);
void NewDummvRST(struct Anim * anim, int unk44);
void sub_805B584(void);
void DummvRSTMain(struct ProcEfx * proc);
void NewEfxRestWIN(struct Anim * anim, int unk44, void * unk54, void * unk58);
void EfxRestWINMain(struct ProcEfx * proc);
// ??? EfxMagicHBlank_805B724(???);
// ??? EfxMagicHBlank_805B750(???);
// ??? EfxMagicHBlank_805B77C(???);
// ??? EfxMagicHBlank_805B7BC(???);
// ??? EfxMagicHBlank_805B7FC(???);
void NewEfxRestWINH(struct Anim * anim, int a, s16 b, u32 c);
void NewEfxRestWINH_(struct Anim * anim, int a, int b);

extern CONST_DATA struct ProcCmd ProcScr_efxALPHA[];
extern CONST_DATA struct ProcCmd ProcScr_efxCircleWIN[];
extern CONST_DATA struct ProcCmd ProcScr_efxMagicQUAKE[];
extern CONST_DATA struct ProcCmd ProcScr_efxDummymagic[];
extern CONST_DATA struct ProcCmd ProcScr_efxTeono[];
extern CONST_DATA struct ProcCmd ProcScr_efxTeonoOBJ[];
extern CONST_DATA struct ProcCmd ProcScr_efxTeonoOBJ2[];
extern CONST_DATA struct ProcCmd ProcScr_efxTeonoSE[];
extern CONST_DATA struct ProcCmd ProcScr_efxArrow[];
extern CONST_DATA struct ProcCmd ProcScr_efxArrowOBJ[];
extern CONST_DATA struct ProcCmd ProcScr_efxTeyari[];
extern CONST_DATA struct ProcCmd ProcScr_efxTeyariOBJ[];
extern CONST_DATA struct ProcCmd ProcScr_efxSong[];
extern CONST_DATA struct ProcCmd ProcScr_efxSongBG[];
// extern ??? gUnknown_085D5188
// extern ??? gUnknown_085D51F4
// extern ??? ProcScr_efxSongOBJ
// extern ??? ProcScr_efxDance
// extern ??? ProcScr_efxShooter
// extern ??? ProcScr_efxShooterOBJ
// extern ??? ProcScr_efxHurtmut
// extern ??? ProcScr_efxHurtmutOBJ
// extern ??? ProcScr_efxFirebreath
// extern ??? ProcScr_efxFirebreathOBJ
// extern ??? ProcScr_efxFirebreathBG
// extern ??? ProcScr_efxFirebreathBGCOL
// extern ??? gUnknown_085D5358
// extern ??? gUnknown_085D5370
// extern ??? gUnknown_085D5390
// extern ??? gUnknown_085D53A8
// extern ??? gUnknown_085D53C0
// extern ??? gUnknown_085D53F0
extern struct ProcCmd ProcScr_efxDarkbreathOBJ[];
extern struct ProcCmd ProcScr_efxThunder[];
extern struct ProcCmd ProcScr_efxThunderBG[];
extern u16 *gUnknown_085D5458[2];
extern u16 *gUnknown_085D5460[2];
extern struct ProcCmd ProcScr_efxThunderBGCOL[];
extern struct ProcCmd ProcScr_efxThunderOBJ[];
extern struct ProcCmd ProcScr_efxFire[];
extern struct ProcCmd ProcScr_efxFireBG[];
extern u16 *gUnknown_085D54D0[];
extern u16 *gUnknown_085D5500[];
extern struct ProcCmd ProcScr_efxFireOBJ[];
extern struct ProcCmd ProcScr_efxFireHITBG[];
extern u16 *gUnknown_085D5560[];
extern u16 *gUnknown_085D55B4[];
extern struct ProcCmd ProcScr_efxElfireBG[];
extern struct ProcCmd ProcScr_efxElfireBGCOL[];
extern struct ProcCmd ProcScr_efxElfireOBJ[];
extern struct ProcCmd ProcScr_efxFimbulvetr[];
extern struct ProcCmd ProcScr_efxFimbulvetrBGTR[];
// extern ??? TsaArray_FimbulvetrBg_Tornado
// extern ??? ImgArray_FimbulvetrBg_Tornado
// extern ??? ProcScr_efxFimbulvetrBG
// extern ??? TsaArray_FimbulvetrBg
// extern ??? ImgArray_FimbulvetrBg
// extern ??? ProcScr_efxFimbulvetrOBJ
// extern ??? ProcScr_efxFimbulvetrOBJ2
// extern ??? ProcScr_efxFimbulvetrOBJ2Fall
// extern ??? gProcScr_efxThunderstorm
// extern ??? gProcScr_efxThunderstormBG
extern u16 * ImgArray_BoltingBg[];
extern u16 * TsaArray_BoltingBg[];
// extern ??? gProcScr_efxThunderstormOBJ
// extern ??? gProcScr_efxThunderstormCOLOR
// extern ??? gProcScr_efxThunderstormDARK
extern struct ProcCmd gProcScr_efxAlacalibur[];
extern struct ProcCmd gProcScr_efxAlacaliburBG[];
extern u16 * TsaArray_AircaliburBg[];
extern struct ProcCmd gProcScr_efxAlacaliburBGCOL[];
extern struct ProcCmd gProcScr_efxAlacaliburOBJ[];
extern struct ProcCmd gProcScr_efxMistyrain[];
extern struct ProcCmd gProcScr_efxMistyrainBG[];
extern u16 * gUnknown_085D5920[];
extern u16 * gUnknown_085D59C4[];
extern struct ProcCmd ProcScr_efxMistyrainOBJ[];
extern struct ProcCmd gProcScr_efxMistyrainOBJ2[];
// extern ??? ProcScr_efxResire
// extern ??? ProcScr_efxResireBG
// extern ??? ProcScr_efxResireBG2
// extern ??? ImgArray_NosferatuBg
// extern ??? TsaArray_NosferatuBg
// extern ??? ProcScr_efxResireRST
// extern ??? ProcScr_efxLightning
// extern ??? ProcScr_efxLightningBG
// extern ??? ImgArray_LightningBg
// extern ??? PalArray_LightningBg
// extern ??? TsaArray_LightningBg
// extern ??? ProcScr_efxPurge
// extern ??? ProcScr_efxPurgeBG
// extern ??? ImgArray_PurgeBg
// extern ??? PalArray_PurgeBg
// extern ??? TsaArray_PurgeBg
// extern ??? ProcScr_efxPurgeOBJRND
// extern ??? gPurgeAnimSpriteCoordinates
// extern ??? ProcScr_efxPurgeOBJ
// extern ??? ProcScr_efxDivine
// extern ??? ProcScr_efxDivineBG
// extern ??? ImgArray_DivineBg
// extern ??? TsaArray_DivineBg
// extern ??? ImgArray_DivineBg2
// extern ??? TsaArray_DivineBg2
// extern ??? ImgArray_DivineBg3
// extern ??? TsaArray_DivineBg3
// extern ??? ProcScr_efxDivineOBJ
// extern ??? ProcScr_efxHazymoon
// extern ??? ProcScr_efxHazymoonBG
// extern ??? TsaArray_EclipseBg
// extern ??? ImgArray_EclipseBg
// extern ??? ProcScr_efxHazymoonOBJ2
// extern ??? ProcScr_efxHazymoonOBJ3
// extern ??? gEclipseAnimSpriteCoordinates
// extern ??? ProcScr_efxHazymoonOBJ3RND
// extern ??? ProcScr_efxFenrir
// extern ??? ProcScr_efxFenrirBG
// extern ??? ProcScr_efxFenrirBGCOL
// extern ??? ProcScr_efxFenrirOBJ
// extern ??? ProcScr_efxFenrirBG2
// extern ??? ImgArray_FenrirBg
// extern ??? TsaArray_FenrirBg
// extern ??? ProcScr_efxFenrirOBJ2
// extern ??? ProcScr_efxFenrirOBJ2Chiri
// extern ??? gFenrirSpriteAngles
// extern ??? ProcScr_efxLive
// extern ??? ProcScr_efxRelive
// extern ??? ProcScr_efxRecover
// extern ??? ProcScr_efxReblow
// extern ??? ProcScr_efxLiveBG
// extern ??? ProcScr_efxLiveBGCOL
// extern ??? ProcScr_efxLiveALPHA
// extern ??? ProcScr_efxLiveOBJ
// extern ??? ProcScr_efxReserveOBJ
// extern ??? ProcScr_efxReblowOBJ
// extern ??? ProcScr_efxReserve
// extern ??? ProcScr_efxReserveBG
// extern ??? TsaArray_Fortify
// extern ??? ProcScr_efxReserveBGCOL
// extern ??? ProcScr_efxReserveBG2
// extern ??? TsaArray_FortifyBg2
// extern ??? ProcScr_efxReserveBGCOL2
// extern ??? ProcScr_efxRest
// extern ??? ProcScr_efxRestBG
// extern ??? TsaArray_RestoreBg
// extern ??? ImgArray_RestoreBg
// extern ??? ProcScr_efxRestOBJ
// extern ??? ProcScr_efxSilence
// extern ??? ProcScr_efxSilenceBG
// extern ??? TsaArray_SilenceBg
// extern ??? ProcScr_efxSilenceOBJ
// extern ??? ProcScr_efxSleep
// extern ??? ProcScr_efxSleepBG
// extern ??? TsaArray_SleepBg
// extern ??? ProcScr_efxSleepOBJ
// extern ??? ProcScr_efxSleepOBJ2
// extern ??? ProcScr_efxSleepSE
// extern ??? ProcScr_efxHammarne
// extern ??? ProcScr_efxHammarneBG
// extern ??? TsaArray_HammerneBg
// extern ??? ImgArray_HammerneBg
// extern ??? ProcScr_efxHammarneOBJ
// extern ??? ProcScr_efxBerserk
// extern ??? ProcScr_efxBerserkBG
// extern ??? ProcScr_efxBerserkCLONE
// extern ??? ProcScr_efxBerserkOBJ
// extern ??? ProcScr_efxMshield
// extern ??? ProcScr_efxMshieldBG
// extern ??? TsaArray_BarrierBg
// extern ??? ProcScr_efxMshieldBGOBJ
// extern ??? ProcScr_efxMshieldBGOBJ2
// extern ??? ProcScr_efxShine
// extern ??? ProcScr_efxShineBG
// extern ??? TsaArray_ShineBg_Left
// extern ??? TsaArray_ShineBg_Right
// extern ??? ImgArray_ShineBg
// extern ??? ProcScr_efxShineBG2
// extern ??? TsaArray_ShineBg2
// extern ??? ProcScr_efxShineBGCOL
// extern ??? ProcScr_efxShineOBJRND
// extern ??? gShineSpriteCoords
// extern ??? ProcScr_efxShineOBJ
// extern ??? ProcScr_efxLuna
// extern ??? ProcScr_efxLunaBG
// extern ??? TsaArray_LunaBg1
// extern ??? ProcScr_efxLunaSCR
// extern ??? ProcScr_efxLunaSCR2
// extern ??? gLunaBgScrollOffsets
// extern ??? ProcScr_efxLunaBG2
// extern ??? ProcScr_efxLunaBGCOL
// extern ??? ProcScr_efxLunaBG3
// extern ??? TsaArray_LunaBg3
// extern ??? ImgArray_LunaBg3
// extern ??? ProcScr_efxLunaOBJ
// extern ??? ProcScr_efxLunaRST
// extern ??? ProcScr_efxExcalibur
// extern ??? ProcScr_efxExcaliburBG
// extern ??? ProcScr_efxExcaliburBGCOL
// extern ??? ProcScr_efxExcaliburSCR
// extern ??? ProcScr_efxExcaliburSCR2
// extern ??? gExcaliburBgScrollOffsets
// extern ??? ProcScr_efxExcaliburBG2
// extern ??? ProcScr_efxExcaliburBGCOL2
// extern ??? ProcScr_efxExcaliburBG3
// extern ??? ProcScr_efxExcaliburBGCOL3
// extern ??? ProcScr_efxExcaliburOBJ
// extern ??? ProcScr_efxExcaliburBG0
// extern ??? ImgArray_efxExcaliburBG0
// extern ??? TsaArray_efxExcaliburBG0
// extern ??? ProcScr_efxGespenstBG4
// extern ??? ProcScr_efxGespenstBGCOL2
// extern ??? ProcScr_efxOura
// extern ??? ProcScr_efxOuraBG
// extern ??? TsaArray_AuraBg1
// extern ??? ProcScr_efxOuraBG2
// extern ??? ProcScr_efxOuraBGCOL
// extern ??? ProcScr_efxOuraBG3
// extern ??? TsaArray_AuraBg3
// extern ??? ImgArray_AuraBg3
// extern ??? ProcScr_efxSuperdruidBG3
// extern ??? ImgArray_EreshkigalBg3
// extern ??? TsaArray_EreshkigalBg3
// extern ??? ProcScr_efxSuperdruidOBJ2
// extern ??? ProcScr_efxDancepara
// extern ??? ProcScr_efxIvaldi
// extern ??? gUnknown_085D76A0
// extern ??? gUnknown_085D76B8
// extern ??? gUnknown_085D76E8
// extern ??? gUnknown_085D7700
// extern ??? ProcScr_efxDanceparaBG3
// extern ??? gUnknown_085D772C
// extern ??? gUnknown_085D7758
// extern ??? gUnknown_085D7784
// extern ??? ProcScr_efxDanceparaBG4
// extern ??? gUnknown_085D77C8
// extern ??? ProcScr_efxDanceparaOBJFall
// extern ??? efxIvaldiOBJSideWash
// extern ??? ProcScr_efxDanceparaOBJUprise
// extern ??? ProcScr_efxDanceparaOBJ1
// extern ??? ProcScr_efxDanceparaOBJ2
// extern ??? ProcScr_efxDanceparaWOUT

void StartSpellAnimation(struct Anim * anim);
// ??? sub_805B3FC(???);

void sub_805B94C(ProcPtr proc);
void sub_805B958(struct ProcEfx * proc);
void NewEfxALPHA(struct Anim * anim, int a, int b, int c, int d, int e);
// ??? EfxALPHAMain(???);
// ??? sub_805BB24(???);
// ??? EfxCircleWINMain(???);
// ??? StartSpellThing_MagicQuake(???);
// ??? Loop6C_efxMagicQUAKE(???);
void StartSpellAnimDummy(struct Anim * anim);
void EfxDummymagicMain(struct ProcEfx * proc);
void StartSpellAnimHandAxe(struct Anim * anim);
void EfxTeonoMain(struct ProcEfx * proc);
void NewEfxTeonoOBJ(struct Anim * anim);
void EfxTeonoObjMain(struct ProcEfxMagicOBJ * proc);
void EfxTeonoObjEnd(struct ProcEfxMagicOBJ * proc);
void NewEfxTeonoOBJ2(struct Anim * anim);
void EfxTeonoObj2Main(struct ProcEfxMagicOBJ * proc);
ProcPtr NewEfxTeonoSE(struct Anim * anim, struct Anim * anim2);
void EfxTeonoSeCallBack(struct ProcEfxMagicOBJ * proc);
void EfxTeonoSeMain(struct ProcEfxMagicOBJ * proc);
void StartSpellAnimArrow(struct Anim * anim);
void EfxArrowMain(struct ProcEfx * proc);
void NewEfxArrowOBJ(struct Anim * anim);
void EfxArrowObjMain(struct ProcEfxMagicOBJ * proc);
void StartSpellAnimJavelin(struct Anim * anim);
void StartSpellAnimJavelinCavalier(struct Anim * anim);
void StartSpellAnimJavelinSoldier(struct Anim * anim);
void StartSpellAnimJavelinPaladin(struct Anim * anim);
void StartSpellAnimJavelinPrgasusKnight(struct Anim * anim);
void StartSpellAnimJavelinFalcon(struct Anim * anim);
void StartSpellAnimJavelinWyvernRider(struct Anim * anim);
void StartSpellAnimJavelinWyvernLord(struct Anim * anim);
void StartSpellAnimJavelinGenerial(struct Anim * anim);
void StartSpellAnimJavelinUnk(struct Anim * anim);
void StartSpellAnimJavelinPaladinF(struct Anim * anim);
void EfxTeyariMain(struct ProcEfx * proc);
void NewEfxTeyariOBJ(struct Anim * anim, int type);
void EfxTeyariObjMain(struct ProcEfxMagicOBJ * proc);
void StartSpellAnimSong(struct Anim * anim);
// ??? EfxSongMain(???);
void sub_805CA64(struct Anim *, int);
// ??? EfxSongBgMain(???);
void sub_805CB40(struct Anim *, int);
// ??? sub_805CBA8(???);
void StartSpellAnimDance(struct Anim * anim);
// ??? sub_805CC14(???);
void sub_805CD0C(struct Anim * anim);
// ??? sub_805CD5C(???);
// ??? sub_805CE1C(???);
// ??? sub_805CE94(???);
void nullsub_42(struct Anim * anim);
void sub_805CEC8(struct Anim * anim);
// ??? sub_805CF04(???);
// ??? sub_805CFC0(???);
// ??? sub_805D030(???);
void StartSpellAnimFireBreath(struct Anim * anim);
// ??? sub_805D09C(???);
// ??? sub_805D14C(???);
// ??? sub_805D1FC(???);
// ??? sub_805D260(???);
// ??? sub_805D2B4(???);
// ??? sub_805D2EC(???);
// ??? sub_805D328(???);
void StartSpellAnimIceBreath(struct Anim * anim);
// ??? sub_805D3C4(???);
// ??? sub_805D444(???);
// ??? sub_805D4B8(???);
void StartSpellAnimDarkBreath(struct Anim * anim);
// ??? Loop6C_efxDarkbreath(???);
// ??? sub_805D59C(???);
// ??? sub_805D5EC(???);
// ??? sub_805D644(???);
// ??? sub_805D680(???);
// ??? sub_805D6CC(???);
// ??? sub_805D774(???);
void StartSpellAnimThunder(struct Anim * anim);
void Loop6C_efxThunder(struct ProcEfx * proc);
void NewEfxThunderBG(struct Anim * anim);
// ??? EfxThunderBGMain(???);
void NewEfxThunderBGCOL(struct Anim * anim);
// ??? sub_805D9F8(???);
void NewEfxThunderOBJ(struct Anim * anim);
// ??? EfxThunderOBJMain(???);
void StartSpellAnimFire(struct Anim * anim);
void StartSpellAnimElfire(struct Anim * anim);
// ??? Loop6C_efxFire(???);
void NewEfxFireBG(struct Anim * anim);
// ??? Loop6C_efxFireBG(???);
void NewEfxFireOBJ(struct Anim * anim);
// ??? sub_805DDA8(???);
void StartSubSpell_efxFireHITBG(struct Anim * anim);
// ??? sub_805DE74(???);
void StartSubSpell_efxElfireBG(struct Anim * anim);
// ??? sub_805DF70(???);
void StartSubSpell_efxElfireBGCOL(struct Anim * anim);
// ??? sub_805DFE8(???);
void StartSubSpell_efxElfireOBJ(struct Anim * anim);
// ??? sub_805E0B4(???);
void StartSpellAnimFimbulvetr(struct Anim * anim);
void efxFimbulvetr_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxFimbulvetrBGTR(struct Anim * anim);
void efxFimbulvetrBGTR_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxFimbulvetrBG(struct Anim * anim);
void efxFimbulvetrBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxFimbulvetrOBJ(struct Anim * anim);
void efxFimbulvetrOBJ_Loop(struct ProcEfxOBJ * proc);
void StartSubSpell_efxFimbulvetrOBJ2(struct Anim * anim);
void efxFimbulvetrOBJ2_Loop(struct ProcEfxOBJ * proc);
void StartSubSpell_efxFimbulvetrOBJ2Fall(struct Anim * anim, int unk);
void efxFimbulvetrOBJ2Fall_Loop(struct ProcEfxOBJ * proc);
void StartSpellAnimBolting(struct Anim * anim);
void efxThunderstorm_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxThunderstormBG(struct Anim * anim);
void efxThunderstormBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxThunderstormOBJ(struct Anim * anim);
void efxThunderstormOBJ_Loop(struct ProcEfxOBJ * proc);
void efxThunderstormOBJ_End(struct ProcEfxOBJ * proc);
void StartSubSpell_efxThunderstormCOLOR(struct Anim * anim);
void efxThunderstormColor_Loop_A(struct ProcEfxBGCOL * proc);
void efxThunderstormColor_Loop_B(struct ProcEfxBGCOL * proc);
void efxThunderstormColor_Loop_C(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxThunderstormDARK(struct Anim * anim, int timer, int terminator);
void efxThunderstormDark_Loop_A(struct ProcEfxBGCOL * proc);
void efxThunderstormDark_Loop_B(struct ProcEfxBGCOL * proc);
void StartSpellAnimAircalibur(struct Anim * anim);
void efxAlacalibur_Loop_Main(struct ProcEfx * proc);
void sub_805ECD4(struct Anim * anim);
void efxAlacaliburBG_Loop(struct ProcEfxBG * proc);
void sub_805ED98(struct Anim * anim);
void efxAlacaliburBGCOL_Loop(struct ProcEfxBGCOL * proc);
void sub_805EE24(struct Anim * anim);
void efxAlacaliburOBJ_Loop(struct ProcEfxOBJ * proc);
void StartSpellAnimFlux(struct Anim * anim);
void efxMistyRain_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxMistyrainBG(struct Anim * anim);
void StartSubSpell_efxMistyrainBG2(struct Anim * anim);
void efxMistyRainBg_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxMistyRainOBJ(struct Anim * anim);
struct ProcEfxOBJ * StartSubSpell_efxMistyrainOBJ2(struct Anim * anim);
void efxMistyRainObj_OnEnd(struct ProcEfxOBJ * proc);
void efxMistyRainObj_805F24C(struct ProcEfxOBJ * proc);
void efxMistyRainObj_805F288(struct ProcEfxOBJ * proc);
void efxMistyRainObj_805F2C4(struct ProcEfxOBJ * proc);
void efxMistyRainObj2_805F300(struct ProcEfxOBJ * proc);
void efxMistyRainObj2_805F32C(struct ProcEfxOBJ * proc);
void StartSpellAnimNosferatu(struct Anim * anim);
void efxResire_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxResireBG(struct Anim * anim, int unk);
void StartSubSpell_efxResireBG2(struct Anim * anim);
void efxResireBG_Loop_A(struct ProcEfxBG * proc);
void efxResireBG_Loop_B(struct ProcEfxBG * proc);
void efxResireBG_Loop_C(struct ProcEfxBG * proc);
void efxResireBG_Loop_D(struct ProcEfxBG * proc);
void efxResireBG2_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxResireRST(struct Anim * anim, ProcPtr b, int c);
void efxResireRST_Loop(struct ProcEfxRST * proc);
void StartSpellAnimLightning(struct Anim * anim);
void efxLightning_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxLightningBG(struct Anim * anim);
void efxLightningBG_Loop(struct ProcEfxBG * proc);
void StartSpellAnimPurge(struct Anim * anim);
void sub_805FB24(int location, int type);
void efxPurge_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxPurgeBG(struct Anim * anim);
void efxPurgeBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxPurgeOBJRND(struct Anim * anim);
void efxPurgeOBJRND_Loop(struct ProcEfxOBJ * proc);
void StartSubSpell_efxPurgeOBJ(struct Anim * anim, int x, int y);
void efxPurgeOBJ_OnEnd(struct ProcEfxOBJ * proc);
void StartSpellAnim_805FE80_Null(struct Anim * anim);
void StartSpellAnimDivine(struct Anim * anim);
void efxDivine_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxDivineBG(struct Anim * anim);
void StartSubSpell_efxDivineBG_2(struct Anim * anim);
void StartSubSpell_efxDivineBG_3(struct Anim * anim);
void efxDivineBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxDivineOBJ(struct Anim * anim);
void efxDivineOBJ_Loop(struct ProcEfxOBJ * proc);
void StartSpellAnim_8060284_Null(struct Anim * anim);
void StartSpellAnim_8060288_Null(struct Anim * anim);
void StartSpellAnimEclipse(struct Anim * anim);
void efxHazymoon_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxHazymoonBG_A(struct Anim * anim);
void StartSubSpell_efxHazymoonBG_B(struct Anim * anim);
void StartSubSpell_efxHazymoonBG_C(struct Anim * anim);
void efxHazymoonBG_Loop(struct ProcEfxEclipseBG * proc);
void StartSubSpell_efxHazymoonOBJ2(struct Anim * anim);
void efxHazymoonOBJ2_OnEnd(struct ProcEfxOBJ * proc);
void efxHazymoonOBJ2_Loop_A(struct ProcEfxOBJ * proc);
void efxHazymoonOBJ2_Loop_B(struct ProcEfxOBJ * proc);
void efxHazymoonOBJ2_Loop_C(struct ProcEfxOBJ * proc);
void StartSubSpell_efxHazymoonOBJ3(struct Anim * anim);
void efxHazymoonOBJ3_Loop(struct ProcEfxOBJ * proc);
void StartSubSpell_efxHazymoonOBJ3RND(struct Anim * anim, int x, int y);
void efxHazymoonOBJ3RND_OnEnd(struct ProcEfxOBJ * proc);
void StartSpellAnimFenrir(struct Anim * anim);
void efxFenrir_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxFenrirBG(struct Anim * anim, int terminator);
void efxFenrirBG_OnEnd(void);
void efxFenrirBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxFenrirBGCOL(struct Anim * anim, int terminator);
void efxFenrirBGCOL_OnEnd(void);
void efxFenrirBGCOL_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxFenrirOBJ(struct Anim * anim, int terminator);
void efxFenrirOBJ_Loop(struct ProcEfxOBJ * proc);
void StartSubSpell_efxFenrirBG2_A(struct Anim * anim);
void StartSubSpell_efxFenrirBG2_B(struct Anim * anim);
void efxFenrirBG2_Loop(struct ProcEfxEclipseBG * proc);
void StartSubSpell_efxFenrirOBJ2(struct Anim * anim);
void efxFenrirOBJ2_Loop(struct ProcEfxOBJ * proc);
void StartSubSpell_efxFenrirOBJ2Chiri(struct Anim * anim, int idx);
void efxFenrirOBJ2Chiri_Loop(struct ProcEfxOBJ * proc);
void StartSpellAnimHeal(struct Anim * anim);
void efxLive_Loop_Main(struct ProcEfx * proc);
void StartSpellAnimMend(struct Anim * anim);
void efxRelive_Loop_Main(struct ProcEfx * proc);
void StartSpellAnimRecover(struct Anim * anim);
void efxRecover_Loop_Main(struct ProcEfx * proc);
void StartSpellAnimPhysic(struct Anim * anim);
void efxReblow_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxLiveBG_A(struct Anim * anim, u32 kind);
void StartSubSpell_efxLiveBG_B(struct Anim * anim, u32 kind);
void efxLiveBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxLiveBGCOL_A(struct Anim * anim, u32 kind);
void StartSubSpell_efxLiveBGCOL_B(struct Anim * anim, u32 kind);
void efxLiveBGCOL_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxLiveALPHA(struct Anim * anim, int timer, int c, int d);
void efxLiveALPHA_Loop_A(struct ProcEfxALPHA * proc);
void efxLiveALPHA_Loop_B(struct ProcEfxALPHA * proc);
void StartSubSpell_efxLiveOBJ(struct Anim * anim);
void StartSubSpell_efxReserveOBJ(struct Anim * anim);
void efxLiveOBJ_Loop(struct ProcEfxOBJ * proc);
void efxReserveOBJ_Loop_A(struct ProcEfxOBJ * proc);
void efxReserveOBJ_Loop_B(struct ProcEfxOBJ * proc);
void StartSubSpell_efxReblowOBJ(struct Anim * anim, u32 kind);
void efxReblowOBJ_Loop_A(struct ProcEfxOBJ * proc);
void efxReblowOBJ_Loop_B(struct ProcEfxOBJ * proc);
void StartSpellAnimFortify(struct Anim * anim);
void StartSpellAnimLatona(struct Anim * anim);
void efxReserve_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxReserveBG(struct Anim * anim);
void efxReserveBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxReserveBGCOL(struct Anim * anim, u32 kind);
void efxReserveBGCOL_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxReserveBG2(struct Anim * anim);
void efxReserveBG2_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxReserveBGCOL2(struct Anim * anim, u32 kind);
void efxReserveBGCOL2_Loop(struct ProcEfxBGCOL * proc);
void StartSpellAnimRestore(struct Anim * anim);
void efxRest_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxRestBG(struct Anim * anim);
void efxRestBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxRestOBJ(struct Anim * anim);
void efxRestOBJ_Loop(void);
void StartSpellAnimSilence(struct Anim * anim);
void efxSilence_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxSilenceBG(struct Anim * anim);
void efxSilenceBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxSilenceOBJ(struct Anim * anim);
void efxSilenceOBJ_OnEnd(struct ProcEfxOBJ * proc);
void StartSpellAnimSleep(struct Anim * anim);
void efxSleep_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxSleepBG(struct Anim * anim);
void efxSleepBG_Loop(struct ProcEfxBG * proc);
void sub_8062898(struct Anim * anim);
void StartSubSpell_efxSleepOBJ2(struct Anim * anim);
void efxSleepOBJ_OnEnd(void);
void StartSubSpell_efxSleepSE(struct Anim * anim);
void efxSleepSE_PlaySE(struct ProcEfx * proc);
void efxSleepSE_OnEnd(void);
void StartSpellAnimHammerne(struct Anim * anim);
void efxHammarne_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxHammarneBG(struct Anim * anim);
void efxHammarneBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxHammarneOBJ(struct Anim * anim);
void efxHammarneOBJ_OnEnd(void);
void StartSpellAnimBerserk(struct Anim * anim);
void efxBerserk_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxBerserkBG(struct Anim * anim, int terminator);
void efxBerserkBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxBerserkCLONE(struct Anim * anim, int terminator);
void efxBerserkCLONE_Loop(struct ProcEfxBG * proc);
void efxBerserkCLONE_OnEnd(void);
void StartSubSpell_efxBerserkOBJ(struct Anim * anim);
void efxBerserkOBJ_OnEnd(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_A(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_C(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_E(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_G(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_I(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_B(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_D(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_F(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_H(struct ProcEfxOBJ * proc);
void efxBerserkOBJ_Loop_J(struct ProcEfxOBJ * proc);
void StartSpellAnimBarrier(struct Anim * anim);
void efxMshield_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxMshieldBG(struct Anim * anim);
void efxMshieldBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxMshieldBGOBJ(struct Anim * anim);
void StartSubSpell_efxMshieldBGOBJ2(struct Anim * anim);
void efxMshieldBGOBJ_OnEnd(struct ProcEfxOBJ * proc);
void StartSpellAnimShine(struct Anim * anim);
void efxShine_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxShineBG(struct Anim * anim);
void efxShineBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxShineBG2(struct Anim * anim);
void efxShineBG2_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxShineBGCOL(struct Anim * anim);
void efxShineBGCOL_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxShineOBJRND(struct Anim * anim);
void efxShineOBJRND_Loop(struct ProcEfxOBJ * proc);
void StartSubSpell_efxShineOBJ(struct Anim * anim, int x, int y);
void efxShineOBJ_Loop(struct ProcEfxOBJ * proc);
void StartSpellAnimLuna(struct Anim * anim);
void efxLuna_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxLunaBG(struct Anim * anim);
void efxLunaBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxLunaSCR(void);
void efxLunaSCR_Loop(struct ProcEfx * proc);
void StartSubSpell_efxLunaSCR2(ProcPtr proc);
void efxLunaSCR2_Loop(struct ProcEfxSCR * proc);
void StartSubSpell_efxLunaBG2(struct Anim * anim, int terminator);
void efxLunaBG2_OnEnd(void);
void efxLunaBG2_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxLunaBGCOL(struct Anim * anim, int terminator);
void efxLunaBGCOL_OnEnd(void);
void efxLunaBGCOL_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxLunaBG3(struct Anim * anim);
void efxLunaBG3_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxLunaOBJ(struct Anim * anim);
void efxLunaOBJ_Loop_A(struct ProcEfxOBJ * proc);
void efxLunaOBJ_Loop_B(struct ProcEfxOBJ * proc);
void efxLunaOBJ_Loop_C(struct ProcEfxOBJ * proc);
void efxLunaOBJ_Loop_D(struct ProcEfxOBJ * proc);
void StartSubSpell_efxLunaRST(struct Anim * anim, ProcPtr b, int c);
void efxLunaRST_Loop(struct ProcEfxRST * proc);
void StartSpellAnimExcalibur(struct Anim * anim);
void efxExcalibur_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxExcaliburBG(struct Anim * anim);
void efxExcaliburBG_OnEnd(void);
void efxExcaliburBG_Loop_A(struct ProcEfxBG * proc);
void efxExcaliburBG_Loop_B(struct ProcEfxBG * proc);
void efxExcaliburBG_Loop_C(struct ProcEfxBG * proc);
void StartSubSpell_efxExcaliburBGCOL(struct Anim * anim);
void efxExcaliburBGCOL_OnEnd(void);
void efxExcaliburBGCOL_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxExcaliburSCR(int unk);
void efxExcaliburSCR_Loop(struct ProcEfx * proc);
void StartSubSpell_efxExcaliburSCR2(struct ProcEfx * proc, int b);
void efxExcaliburSCR2_Loop(struct ProcEfxSCR * proc);
void StartSubSpell_efxExcaliburBG2(struct Anim * anim);
void efxExcaliburBG2_OnEnd(void);
void efxExcaliburBG2_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxExcaliburBGCOL2(struct Anim * anim);
void efxExcaliburBGCOL2_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxExcaliburBG3(struct Anim * anim);
void efxExcaliburBG3_OnEnd(void);
void efxExcaliburBG3_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxExcaliburBGCOL3(struct Anim * anim);
void efxExcaliburBGCOL3_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxExcaliburOBJ(struct Anim * anim);
void efxExcaliburOBJ_Loop(struct ProcEfxOBJ * proc);
void StartSubSpell_efxExcaliburBG0(struct Anim * anim);
void efxExcaliburBG0_Loop(struct ProcEfxBG * proc);
void StartSpellAnimGespenst_Null(struct Anim * anim);
void StartSubSpell_efxGespenstBG4(struct Anim * anim, int terminator);
void efxGespenstBG4_OnEnd(void);
void efxGespenstBG4_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxGespenstBGCOL2(struct Anim * anim);
void efxGespenstBGCOL2_Loop(struct ProcEfxBGCOL * proc);
void StartSpellAnimAura(struct Anim * anim);
void efxOura_Loop_Main(struct ProcEfx * proc);
void StartSubSpell_efxOuraBG_A(struct Anim * anim);
void StartSubSpell_efxOuraBG_B(struct Anim * anim);
void StartSubSpell_efxOuraBG_C(struct Anim * anim);
void efxOuraBG_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxOuraBG2(struct Anim * anim);
void efxOuraBG2_OnEnd(void);
void efxOuraBG2_Loop(struct ProcEfxBG * proc);
void StartSubSpell_efxOuraBGCOL(struct Anim * anim);
void efxOuraBGCOL_Loop(struct ProcEfxBGCOL * proc);
void StartSubSpell_efxOuraBG3(struct Anim * anim);
void efxOuraBG3_Loop(struct ProcEfxBG * proc);
void StartSpellAnimLuce_Null(struct Anim * anim);
void StartSpellAnimEreshkigal_Null(struct Anim * anim);
void StartSubSpell_efxSuperdruidBG3(struct Anim * anim);
void efxSuperdruidBG3_Loop(struct ProcEfxEclipseBG * proc);
void StartSubSpell_efxSuperdruidOBJ2(struct Anim * anim);
void efxSuperdruidOBJ2_OnEnd(void);
void StartSpellAnimFillasMight(struct Anim * anim);
void StartSpellAnimThorsIre(struct Anim * anim);
void StartSpellAnimNinisGrace(struct Anim * anim);
void StartSpellAnimSetsLitany(struct Anim * anim);
void efxDancepara_Loop(struct ProcEfx * proc);
void StartSpellAnimIvaldi(struct Anim * anim);
// ??? Loop6C_efxIvaldi(???);
// ??? StartSpellBG_IvaldiBG1(???);
// ??? Loop6C_efxIvaldiBG1(???);
// ??? StartSpellBG_IvaldiBG2(???);
// ??? Loop6C_efxIvaldiBG2(???);
// ??? StartSpellBG_IvaldiBG3(???);
// ??? Loop6C_efxIvaldiBG3(???);
// ??? StartSpellBG_IvaldiBG4(???);
// ??? sub_8065CA0(???);
// ??? PrepareSomeIvaldiParticleGraphics(???);
// ??? StartSpellOBJ_IvaldiFall(???);
// ??? sub_8065DF8(???);
// ??? StartSpellOBJ_IvaldiSideWash(???);
// ??? Loop6C_efxIvaldiOBJSideWash(???);
// ??? sub_8066060(???);
// ??? sub_80660B4(???);
// ??? sub_8066258(???);
// ??? sub_806635C(???);
// ??? sub_8066390(???);
// ??? sub_8066434(???);
// ??? sub_8066470(???);
// ??? sub_80664A8(???);
void sub_8066514(struct Anim * anim);
// ??? sub_8066550(???);
// ??? sub_80666D0(???);
// ??? sub_8066758(???);
// ??? sub_80667E0(???);
// ??? sub_806683C(???);
// ??? sub_80668DC(???);
// ??? sub_8066914(???);
// ??? sub_806699C(???);
// ??? sub_8066A0C(???);
// ??? sub_8066A94(???);
// ??? sub_8066B14(???);
// ??? sub_8066B40(???);
// ??? sub_8066BBC(???);
// ??? sub_8066BD4(???);
// ??? sub_8066C1C(???);
// ??? sub_8066C74(???);
// ??? sub_8066C98(???);
// ??? sub_8066CB8(???);
// ??? sub_8066D7C(???);
// ??? sub_8066DB0(???);
// ??? sub_8066E74(???);
// ??? sub_8066EA8(???);
// ??? sub_8066EC8(???);
// ??? sub_8066F90(???);
// ??? sub_8066FC4(???);
// ??? sub_80670A8(???);
// ??? sub_80670DC(???);
// ??? sub_80671C0(???);
// ??? sub_80671F4(???);
// ??? sub_8067244(???);
// ??? sub_8067400(???);
// ??? sub_80674A0(???);
void StartSpellAnimStone(struct Anim * anim);
// ??? sub_8067510(???);
// ??? sub_80675D4(???);
// ??? sub_8067660(???);
// ??? sub_80676E4(???);
// ??? sub_8067764(???);
void StartSpellAnimEvilEye(struct Anim * anim);
// ??? sub_80677D4(???);
// ??? sub_806788C(???);
// ??? sub_8067914(???);
// ??? sub_8067984(???);
// ??? sub_8067A30(???);
// ??? sub_8067AA0(???);
// ??? sub_8067B48(???);
void StartSpellAnimNaglfar(struct Anim * anim);
// ??? Loop6C_efxNaglfar(???);
// ??? sub_8067DC4(???);
// ??? Loop6C_efxNaglfarBG(???);
// ??? sub_8067E98(???);
// ??? Loop6C_efxNaglfarBG2(???);
// ??? NewEkrTogiInitPROC(???);
// ??? sub_805B104(???);
// ??? sub_805B18C(???);
// ??? sub_805B200(???);
// ??? sub_805B264(???);
// ??? NewEkrTogiEndPROC(???);
// ??? sub_805B290(???);
// ??? sub_805B2BC(???);
// ??? sub_805B320(???);
// ??? NewEkrTogiColor(???);
// ??? EndEkrTogiColor(???);
// ??? sub_805B394(???);
// ??? sub_8067F64(???);
// ??? sub_8067FB8(???);
// ??? sub_8068028(???);
// ??? sub_806807C(???);
// ??? sub_80680EC(???);
// ??? sub_8068208(???);
// ??? sub_806823C(???);
// ??? sub_80682E0(???);
// ??? sub_8068314(???);
// ??? sub_8068348(???);
// ??? sub_8068614(???);
// ??? sub_8068638(???);
// ??? sub_8068680(???);
// ??? sub_8068738(???);
// ??? sub_80687D0(???);
void sub_80687E4(struct Anim * anim);
// ??? sub_806881C(???);
// ??? sub_80688C0(???);
// ??? sub_8068970(???);
// ??? sub_80689D4(???);
// ??? sub_8068A28(???);
// ??? sub_8068A60(???);
// ??? sub_8068A9C(???);
// ??? sub_8068AFC(???);
void sub_8068B80(struct Anim * anim);
// ??? sub_8068BB8(???);
// ??? sub_8068D20(???);
// ??? sub_8068D78(???);
// ??? sub_8068D9C(???);
// ??? sub_8068DD8(???);
// ??? sub_8068E14(???);
// ??? sub_8068E50(???);
// ??? sub_8068E8C(???);
// ??? sub_8068EC8(???);
// ??? sub_8068F04(???);
// ??? sub_8068F40(???);
// ??? sub_8068F7C(???);
// ??? sub_8068FB8(???);
// ??? sub_8068FF4(???);
// ??? sub_8069030(???);
// ??? sub_806906C(???);
// ??? sub_80690A8(???);
// ??? sub_80690E4(???);
// ??? sub_8069100(???);
// ??? sub_80692B0(???);
// ??? sub_806935C(???);
// ??? sub_80693CC(???);
// ??? sub_8069400(???);
// ??? sub_8069488(???);
// ??? sub_8069528(???);
// ??? sub_8069530(???);
// ??? sub_80696F0(???);
// ??? sub_8069704(???);
// ??? sub_806977C(???);
// ??? sub_80697F4(???);
// ??? sub_8069878(???);
// ??? sub_80699A8(???);
// ??? sub_8069AC4(???);
// ??? sub_8069AFC(???);
// ??? sub_8069B68(???);
// ??? sub_8069C18(???);
// ??? sub_8069CDC(???);
// ??? sub_8069E88(???);
void StartSpellAnimCrimsonEye(struct Anim * anim);
// ??? sub_8069F00(???);
// ??? sub_806A008(???);
// ??? sub_806A068(???);
// ??? sub_806A0CC(???);
// ??? sub_806A138(???);
// ??? sub_806A1EC(???);
// ??? sub_806A3CC(???);
// ??? sub_806A3F4(???);
// ??? sub_806A47C(???);
// ??? sub_806A4CC(???);
// ??? sub_806A560(???);
// ??? sub_806A578(???);
// ??? sub_806A590(???);
// ??? sub_806A634(???);
// ??? sub_806A64C(???);
// ??? sub_806A664(???);
// ??? sub_806A6C4(???);
// ??? sub_806A6FC(???);
// ??? sub_806A7C4(???);
// ??? sub_806A8E8(???);
// ??? sub_806A9C4(???);
// ??? sub_806AAA0(???);
// ??? sub_806ABCC(???);
void sub_806AEF4(struct Anim * anim);
// ??? sub_806AF30(???);
// ??? sub_806B088(???);
// ??? sub_806B0AC(???);
// ??? sub_806B11C(???);
// ??? sub_806B134(???);
// ??? sub_806B194(???);
// ??? sub_806B1E8(???);
// ??? sub_806B24C(???);
// ??? sub_806B2C0(???);
// ??? sub_806B33C(???);
// ??? sub_806B344(???);
// ??? sub_806B4E4(???);
void sub_806B4F8(struct Anim * anim);
