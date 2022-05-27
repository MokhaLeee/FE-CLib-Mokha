#pragma once

typedef struct Unit Unit;


extern struct Vec2 gActiveUnitMoveOrigin;
extern struct Unit* gUnitSubject;

struct UnitDefinition* GetChapterAllyUnitDataPointer(); // FE8U 0x08083349
int CountForceDeployedUnits(void); // FE8U 809541C
int CanShowUnitStatScreen(struct Unit*); // FE8U 0x801C929
int GetUnitSelectionValueThing(struct Unit*); // FE8U 0x0801D51D


