#pragma once

#define ITEM_INDEX(aItem) ((aItem) & 0xFF)
#define ITEM_USES(aItem) ((aItem) >> 8)

#define ITEM_SLOT_NONE (-1)
#define ITEM_SLOT_COUNT (5)
