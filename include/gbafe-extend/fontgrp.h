#pragma once

int String_FromNumber(int number, char* buffer); //! FE8U = 0x8014335
void Font_SetSomeSpecialDrawingRoutine(void); //! FE8U = 0x8004429
int Text_GetXCursor(struct TextHandle*); //! FE8U = 0x8003E51
struct TextHandle* Text_Advance(struct TextHandle*, int);

void Text_80046B4(struct TextHandle *th, u32 b);
void Text_Init3(struct TextHandle *th);
void InitSomeOtherGraphicsRelatedStruct(struct Font *font, void *vramDest, int c);

extern struct Font gSomeFontStruct;
