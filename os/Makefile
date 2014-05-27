NASM?=yasm
CC?=gcc
LD?=ld

all: kernel.bin

kernel.bin: start.asm
	$(NASM) start.asm -f elf -o start.o
	$(LD) -T link.ld -o kernel.bin start.o

clean:
	rm -f start.o kernel.bin
