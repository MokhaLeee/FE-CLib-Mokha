#pragma once
#include "gbafe.h"


struct StatScreenPageNameProc
{
    /* 00 */ PROC_HEADER;

    // Page Num Sprite Control proc only
    /* 2A */ short xLeftCursor;
    /* 2C */ short xRightCursor;
    /* 2E */ u16 animTimerLeft;
    /* 30 */ u16 animTimerRight;
    /* 32 */ short animSpeedLeft;
    /* 34 */ short animSpeedRight;

    // Page Name Sprite Control proc only
    /* 36 */ u8 pageNum;
    /* 38 */ short yScale; // 6 == times 1
};

struct StatScreenInfo
{
    /* 00 */ u8  unk00;
    /* 01 */ u8  unitId;
    /* 02 */ u16 config;
};

struct SSTextDispInfo
{
    /* 00 */ struct TextHandle* text;
    /* 04 */ u16* tilemap;
    /* 08 */ u8 color;
    /* 09 */ u8 xoff;
    /* 0C */ const unsigned* mid;
};

struct HelpPromptSprProc
{
    PROC_HEADER;

    /* 2C */ int xDisplay;
    /* 30 */ int yDisplay;
    /* 34 */ int tileref;
};




extern struct StatScreenSt gStatScreen;	// 0x2003BFC in FE8U
extern u16 gBmFrameTmap0[0x280]; // bg0 tilemap buffer for stat screen page
extern u16 gBmFrameTmap1[0x240]; // bg2 tilemap buffer for stat screen page
extern struct StatScreenInfo sStatScreenInfo;

extern struct HelpBoxInfo sMutableHbi;
extern const struct HelpBoxInfo* sLastHbi;
extern struct Vec2 sHbOrigin;

extern struct SSTextDispInfo const sPage0TextInfo[];
extern struct SSTextDispInfo const sPage1TextInfo[];
extern struct SSTextDispInfo const sPage2TextInfo_Physical[];
extern struct SSTextDispInfo const sPage2TextInfo_Magical[];




// More in StatScreen.c
void InitTexts(void);
void DisplayTexts(const struct SSTextDispInfo* unk);
void DisplayLeftPanel(void);
void DisplayBwl(void);
void DrawStatWithBar(int num, int x, int y, int base, int total, int max);
void DisplayPage0(void);
void DisplayPage1(void);
void DisplaySupportList(void);
void DisplayWeaponExp(int num, int x, int y, int wtype);
void DisplayPage2(void);
void DisplayPage(int pageid);
struct Unit* FindNextUnit(struct Unit* u, int direction);
void PageSlide_OnLoop(struct StatScreenEffectProc* proc);
void PageSlide_OnEnd(struct StatScreenEffectProc* proc);
void StartPageSlide(u16 config, int newPage, struct Proc* parent);
void GlowBlendCtrl_OnInit(struct StatScreenEffectProc* proc);
void GlowBlendCtrl_OnLoop(struct StatScreenEffectProc* proc);
void StartGlowBlendCtrl(void);
void EndGlowBlendCtrl(struct StatScreenEffectProc* proc);
void UnitSlide_InitFadeOut(struct StatScreenEffectProc* proc);
void UnitSlide_FadeOutLoop(struct StatScreenEffectProc* proc);
void UnitSlide_InitFadeIn(struct StatScreenEffectProc* proc);
void UnitSlide_FadeInLoop(struct StatScreenEffectProc* proc);
void UnitSlide_SetNewUnit(struct StatScreenEffectProc* proc);
void ClearSlide(struct Proc* proc);
void StartUnitSlide(struct Unit* unit, int direction, struct Proc* parent);
void DisplayPageNameSprite(int pageid);
void PageNameCtrl_OnInit(struct StatScreenPageNameProc* proc);
void PageNameCtrl_OnIdle(struct StatScreenPageNameProc* proc);
void PageNameCtrl_AnimOut(struct StatScreenPageNameProc* proc);
void PageNameCtrl_AnimIn(struct StatScreenPageNameProc* proc);
void PageNumCtrl_OnInit(struct StatScreenPageNameProc* proc);
void PageNumCtrl_CheckSlide(struct StatScreenPageNameProc* proc);
void PageNumCtrl_UpdateArrows(struct StatScreenPageNameProc* proc);
void PageNumCtrl_UpdatePageNum(struct StatScreenPageNameProc* proc);
void PageNumCtrl_DisplayMuPlatform(struct StatScreenPageNameProc* proc);
void PageNumCtrl_DisplayBlinkIcons(struct StatScreenPageNameProc* proc);
void StatScreen_BlackenScreen(void);
void StatScreen_InitDisplay(struct Proc* proc);
void StatScreen_Display(struct Proc* proc);
void StatScreen_OnIdle(struct Proc* proc);
void StatScreen_OnClose(void);
void StatScreen_ResumeFromHelp(void);
void BgOffCtrl_OnLoop(void);
void StartStatScreenHelp(int pageid, struct Proc* proc);

void HelpBox_OnOpen(struct HelpBoxProc* proc);
void HelpBox_OnLoop(struct HelpBoxProc* proc);
void HelpBox_OnClose(struct HelpBoxProc* proc);
void HelpBox_WaitClose(struct HelpBoxProc* proc);
void HbMoveCtrl_OnInitBox(struct HelpBoxProc* proc);
void HbMoveCtrl_OnIdle(struct HelpBoxProc* proc);
void HbMoveCtrl_OnEnd(struct HelpBoxProc* proc);
void ApplyHelpBoxContentSize(struct HelpBoxProc* proc, int width, int height);
void ApplyHelpBoxPosition(struct HelpBoxProc* proc, int x, int y);
void HbPopulate_AutoItem(struct HelpBoxProc* proc);
void HbLock_OnIdle(struct Proc* proc);
void HelpPrompt_OnIdle(struct HelpPromptSprProc* proc);

// TODO: figure out what to do with those
// (It's in the weird EWRAM overlay area)

extern struct StatScreenSt gStatScreen; // statscreen state
extern u16 gBmFrameTmap0[0x280]; // bg0 tilemap buffer for stat screen page
extern u16 gBmFrameTmap1[0x240]; // bg2 tilemap buffer for stat screen page

extern struct StatScreenInfo sStatScreenInfo;

extern struct HelpBoxInfo sMutableHbi;
extern const struct HelpBoxInfo* sLastHbi;
extern struct Vec2 sHbOrigin;


