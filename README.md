
## FE-Clib fit to Decomp

A newer C headers with references fit to [FE8U decomp](https://github.com/FireEmblemUniverse/fireemblem8u.git) at date 2022.05.03 by Mokha.


## Usage

#### Here is an [example](https://github.com/MokhaLeee/FE-cHack-Template.git) via new C-Lib to build Decomp-based CHAX.

For custom build:

- Add the `FE-CLib-Mokha/include` directory to your include path of makefile, such as:
```
# inside wizardry.mk
CLI_DIR := $(realpath .)/Tools/FE-CLib-Mokha
INC_DIRS := Wizardry/include $(CLI_DIR)/include 
INCFLAGS := $(foreach dir, $(INCLUDE_DIRS), -I "$(dir)")
``` 

	Then set compiling flags as:
```
ARCH    := -mcpu=arm7tdmi -mthumb -mthumb-interwork
CFLAGS  := $(ARCH) $(INCFLAGS) -Wall -O2 -mtune=arm7tdmi -ffreestanding -mlong-calls
```

- `#include "gbafe.h"` in your souce code.

- Build the *latest* reference object (for now, is `reference/FE8U-Decomp-20220222.o`) and link against it as:
```
# inside wizardry.mk
LYN_REFERENCE := Tools/FE-CLib-Mokha/reference/FE8U-Decomp-20220222.o
# ...
%.lyn.event: %.o $(LYN_REFERENCE)
	@$(LYN) $< $(LYN_REFERENCE) > $@
``` 


## Reference objects

You can use functions and variables defined inside `include/` folders directly without worry about their adress inside ROM or RAM, for example, just use `gActiveUnit->pow` to get unit's strength power and lyn will automaticlly get where `gActiveUnit` is (`0x3004E50`, actually).

However, if you want to use some new funcs or vars that have not been decomped yet, you can define them by yourself inside source code, for example:
```
static u16 (*PrepItemUse_ApplyJunaFruitAndGetMessageId)(struct Unit*, int item_slot) = (const void*) 0x802F979;
```

BTW, the old versions of function and variable definitions is also available inside reference.

## Updating the reference

Take [elf2ref](https://github.com/StanHash/fe6-wizardry/blob/master/tools/scripts/elf2ref.py)(credit to StanH) to make reference by command:
```
python3 elf2ref.py fireemblem8.elf > FE8U-Decomp-20220503.s
```
where `fireemblem8.elf` can be got through making [FE8U decomp](https://github.com/FireEmblemUniverse/fireemblem8u.git). Don't forget to copy what inside `FE8U-20190316.s` to new ref file.

## Thanks
- `StanH` and `Laqieer`, constructor of original FE-Clib, Decomp. proj., etc. Cool guys.
- FEU friends, cool guys.
