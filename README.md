
## FE-Clib fit to Decomp

A newer C headers with references fit to [FE8U decomp](https://github.com/FireEmblemUniverse/fireemblem8u.git) at date 2022.05.03 by Mokha.


## Toturial

Please refer to StanH's [GBAFE hack in C toturial](https://feuniverse.us/t/guide-doc-asm-hacking-in-c-with-ea/3351).

Here is an [example](https://github.com/MokhaLeee/FE-cHack-Template.git) via new C-Lib to build Decomp-based CHAX.


## Usage (with DevkitARM):

Build makefile as below:

```
CLIB_DIR := $(realpath .)/FE-CLib-Mokha

# Need DevKitPRO Installed!
include $(DEVKITARM)/base_tools

# Get all header files directories
INC_DIRS := $(CLIB_DIR)/include 
INCFLAGS := $(foreach dir, $(INC_DIRS), -I "$(dir)")

# Refer to StanH's toturial: https://feuniverse.us/t/guide-doc-asm-hacking-in-c-with-ea/3351
ARCH    := -mcpu=arm7tdmi -mthumb -mthumb-interwork
CFLAGS  := $(ARCH) $(INCFLAGS) -Wall -O2 -mtune=arm7tdmi -ffreestanding -mlong-calls
CDEPFLAGS := -MD -MT $*.o -MT $*.asm -MF $*.d -MP

%.o: %.c
	@$(CC) $(CFLAGS) $(CDEPFLAGS) -g -c $< -o $@ $(ERROR_FILTER)


# Need Lyn(elf2ea) asset: https://feuniverse.us/t/ea-asm-tool-lyn-elf2ea-if-you-will/2986
LYN := EventAssembler/Tools/lyn.exe
LYN_REF := $(CLIB_DIR)/reference/FE8U-Decomp-20220503.o

%.lyn.event: %.o $(LYN_REF)
	@$(LYN) $< $(LYN_REF) > $@
``` 

Finally, type `#include "gbafe.h"` in the header of your own C files.

Then you can use command `make *.lyn.event` to compile your own c-code through Msys2.

Note that `$(CC)` is set as `$(DEVKITARM)/arm-none-eabi-gcc` which is defined in `$(DEVKITARM)/base_tools`, you can also use ARM tool chains for master hackers. `$(LYN)` is path to lyn.exe, usually it can be found in `EventAssembler/Tools`, and the `$(LYN_REF)` holds all of the functions and variables pointers.





## Thanks
- `StanH` and `Laqieer`, constructor of original FE-Clib, Decomp. proj., etc. Cool guys.
- FEU friends, cool guys.
