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
