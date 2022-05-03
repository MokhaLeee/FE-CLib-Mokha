#pragma once


enum _TargetSelectionEffect {
	TSE_NONE = 0x00,

	TSE_DISABLE = 0x01, // (for one frame, probably useful for blocking)
	TSE_END = 0x02,
	TSE_PLAY_BEEP = 0x04,
	TSE_PLAY_BOOP = 0x08,
	TSE_CLEAR_GFX = 0x10,
	TSE_END_FACE0 = 0x20
};


// 0x80251B5
void MakeTargetListForWeapon(struct Unit*,u16);

// 0x802517D
void AddUnitToTargetListIfNotAllied(struct Unit*);
