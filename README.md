
## FE-Clib fit to Decomp

C header files for **FireEmblem8U** port from [decomp](https://github.com/FireEmblemUniverse/fireemblem8u)

## Usage:

Suppose you have a *.c* file (named as *test.c*), then

- *.c* to *.o*

```bash
make -f <path-to-lib>/template.mk test.o
```

Then you can use [lyn(elf2ea)](https://feuniverse.us/t/ea-asm-tool-lyn-elf2ea-if-you-will/2986) to convert *.o* file to the *.lyn.event*
