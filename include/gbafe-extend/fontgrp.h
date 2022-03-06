#pragma once

int String_FromNumber(int number, char* buffer); //! FE8U = 0x8014335
void Font_SetSomeSpecialDrawingRoutine(void); //! FE8U = 0x8004429
int Text_GetXCursor(struct TextHandle*); //! FE8U = 0x8003E51
struct TextHandle* Text_Advance(struct TextHandle*, int);

extern struct Font gSomeFontStruct;
