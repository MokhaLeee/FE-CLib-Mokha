#pragma once

#define CHAR_NEWLINE 0x01

struct Struct02026E30
{
    u32 tileDataOffset;
    s16 bg;
    u16 tileIndex;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    char unk14[256][32];
};

struct Struct02028E78
{
    s8 unk0;
    s8 unk1;
    s16 unk2;
};

extern struct Struct02026E30 gUnknown_02026E30;
extern struct Struct02026E30 gDebugTextData;

extern char gUnknown_02028E44[9];
extern char gDebugNumberString[9];

extern int gUnknown_02028E50;
extern int gDebugFontObjTileRoot;

extern int gUnknown_02028E54;
extern int gDebugFontObjPaletteMask;

extern struct Font gDefaultFont;
extern struct Font *gCurrentFont;

extern u8 gUnknown_02028E74;
extern u8 gLang;

extern struct Struct02028E78 gUnknown_02028E78[64];
extern struct Struct02028E78 gSpecialUiCharAllocationTable;

int String_FromNumber(int number, char* buffer); //! FE8U = 0x8014335
void Font_SetSomeSpecialDrawingRoutine(void); //! FE8U = 0x8004429
int Text_GetXCursor(struct TextHandle*); //! FE8U = 0x8003E51
struct TextHandle* Text_Advance(struct TextHandle*, int);

void Text_80046B4(struct TextHandle *th, u32 b);
void Text_Init3(struct TextHandle *th);
void InitSomeOtherGraphicsRelatedStruct(struct Font *font, void *vramDest, int c);

extern struct Font gSomeFontStruct;
