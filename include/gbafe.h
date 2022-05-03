#ifndef GBAFE_H
#define GBAFE_H

#ifdef __cplusplus
extern "C" {
#endif

// some files enjoy priority
#include "gbafe/global.h"
#include "gbafe/types.h"
#include "gbafe/proc.h"
#include "gbafe/bmunit.h"
#include "gbafe/fontgrp.h"
#include "gbafe/uimenu.h"

#include "constants/characters.h"
#include "constants/classes.h"
#include "constants/items.h"
#include "constants/terrains.h"



#include "gbafe/agb_sram.h"
#include "gbafe/anime.h"
#include "gbafe/ap.h"
#include "gbafe/banim_data.h"
#include "gbafe/banim_pointer.h"
#include "gbafe/bmbattle.h"
#include "gbafe/bmcontainer.h"
#include "gbafe/bmdebug.h"
#include "gbafe/bmidoten.h"
#include "gbafe/bmio.h"
#include "gbafe/bmitem.h"
#include "gbafe/bmitemuse.h"
#include "gbafe/bmmap.h"
#include "gbafe/bmmenu.h"
#include "gbafe/bmmind.h"
#include "gbafe/bmpatharrowdisp.h"
#include "gbafe/bmphase.h"
#include "gbafe/bmreliance.h"
#include "gbafe/bmtrick.h"
#include "gbafe/bmusemind.h"
#include "gbafe/chap_title.h"
#include "gbafe/chap_title_pointer.h"
#include "gbafe/chapterdata.h"
#include "gbafe/convoymenu.h"
#include "gbafe/cp_common.h"
#include "gbafe/ctc.h"
#include "gbafe/ev_triggercheck.h"
#include "gbafe/event.h"
#include "gbafe/hardware.h"
#include "gbafe/icon.h"
#include "gbafe/m4a.h"
#include "gbafe/mapanim.h"
#include "gbafe/monstergen.h"
#include "gbafe/mu.h"
#include "gbafe/packed_data_block.h"
#include "gbafe/portrait_pointer.h"
#include "gbafe/raw_text_jp.h"
#include "gbafe/rng.h"
#include "gbafe/sallycursor.h"
#include "gbafe/soundwrapper.h"
#include "gbafe/statscreen.h"
#include "gbafe/uiselecttarget.h"
#include "gbafe/uiutils.h"
#include "gbafe/unit_icon_data.h"
#include "gbafe/unit_icon_pointer.h"


#include "gbafe/variables.h"
#include "gbafe/functions.h"


#include "gbafe-extend/unit.h"
// #include "gbafe-extend/map-select.h"
#include "gbafe-extend/stat-screen.h"
#include "gbafe-extend/target-select.h"
#include "gbafe-extend/prep-item.h"
#include "gbafe-extend/ctc.h"
#include "gbafe-extend/fontgrp.h"
#include "gbafe-extend/other.h"
#include "gbafe-extend/sound.h"
#include "gbafe-extend/compress.h"
#include "gbafe-extend/proc.h"
#include "gbafe-extend/game.h"
#include "gbafe-extend/map.h"
#include "gbafe-extend/menu-panel.h"
#include "gbafe-extend/item.h"

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GBAFE_H
