
## FE-Clib fit to Decomp

C header files for **FireEmblem8U** port from [decomp](https://github.com/FireEmblemUniverse/fireemblem8u)

## Usage (for WSL & ubuntu):

Suppose you have a **.c** file (named as *test.c*), then

1. **.c** to **.o**

```bash
make -f <path-to-lib>/template.mk test.o
```

Then you can use [lyn(elf2ea)](https://feuniverse.us/t/ea-asm-tool-lyn-elf2ea-if-you-will/2986) to convert **.o** file to the **.lyn.event**, or

2. **.c** to **.lyn.event**

Put compiled [EventAssembler](https://github.com/StanHash/EventAssembler) to the home dir(**~/EventAssembler**), then

```bash
make -f <path-to-lib>/wizardry.mk test.lyn.event
```
