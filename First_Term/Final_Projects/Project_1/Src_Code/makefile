# Author: Omar Ahmed

# ($<) >>> dependencies  /////  ($@) >>>> target

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
PROJECT_NAME=Pressure_Detection_System

all: $(PROJECT_NAME).bin
	@echo "<<<<<<<Build is done>>>>>>>" 

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(PROJECT_NAME).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) $(LIBS) -Map=output.map -o $@ 
 
$(PROJECT_NAME).bin: $(PROJECT_NAME).elf
	$(CC)objcopy.exe -O binary $< $@
clear:
	rm *.bin *.elf

clear_all:
	rm *.o *.elf *.bin

