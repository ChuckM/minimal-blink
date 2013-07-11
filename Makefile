# Very simple makefile for minimum blinker
# 
PREFIX=arm-none-eabi-

# assembler
AS=$(PREFIX)as
AS_OPTS=-mthumb -mcpu=cortex-m4

# C compiler
CC=$(PREFIX)gcc
CC_OPTS=-mthumb -mcpu=cortex-m4

# Linker
LD=$(PREFIX)ld
LD_OPTS= -Tsimple.ld

# Tool to conver binary to Intel HEX format
OC=$(PREFIX)objcopy

OBJECTS= startup.o blink.o

blink.hex: blink
	$(OC) -O ihex $< $@

startup.o: startup.s
	$(AS) $(AS_OPTS) -c $< -o $@

blink.o: blink.c
	$(CC) $(CC_OPTS) -c $< -o $@

blink: blink.o startup.o simple.ld
	$(LD) $(LD_OPTS) -Map $@.map -o $@ $(OBJECTS)

clean:
	rm -f blink blink.o startup.o blink.hex blink.map
