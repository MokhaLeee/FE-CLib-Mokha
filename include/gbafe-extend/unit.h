#pragma once

#define UNIT_VAILD_MOKHA_JUDGE(aUnit)	( 0x202B000 != (0x202B000 & (uint32_t)aUnit) )

extern struct Vec2 gActiveUnitMoveOrigin;

struct UnitDefinition* GetChapterAllyUnitDataPointer(); // FE8U 0x08083349
int CountForceDeployedUnits(void); // FE8U 809541C
int CanShowUnitStatScreen(struct Unit*); // FE8U 0x801C929
int GetUnitSelectionValueThing(struct Unit*); // FE8U 0x0801D51D


