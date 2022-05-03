#pragma once
//#include "gbafe.h"

typedef struct PanelProc PanelProc;
struct PanelProc{
	/* 00 */ PROC_HEADER;
	
	/* 2C */ struct Unit* unit;
	/* 30 */ u8 xPos;
	/* 31 */ u8 yPos;
	/* 32 */ u8 icon_pal;
	/* 33 */ s8 item_slot;
	/* 34 */ struct TextHandle text[6];
	/* 64 */ u8 _unk64;
};



extern const struct ProcCmd gProc_MenuItemPanel[]; // FE8U 0x859AE88

void ForceMenuItemPanel(struct MenuProc* menu, struct Unit*, u8 x, u8 y); // 0x801E685
void MenuItemPanel_Idle(struct PanelProc* proc); // 0x801E684
void UpdateMenuItemPanel(s8 index); // 0x801E749
void EndMenuItemPanel(void); // 0x801EA55


extern const struct ObjData* ObjData_859A530[];
extern const struct ObjData* ObjData_859A53C[];