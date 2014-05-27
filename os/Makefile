NASM?=yasm
CC?=gcc
LD?=ld

all: kernel.bin

kernel.bin: start.asm main.o dirty.o system.o
	$(NASM) start.asm -f elf -o start.o
	$(LD) -T link.ld -o kernel.bin start.o main.o dirty.o system.o

main.o: main.c
	$(CC) -Wall -O -fstrength-reduce -fomit-frame-pointer -finline-functions -nostdinc -fno-builtin -c -o main.o main.c

dirty.o: dirty.c
	$(CC) -Wall -O -fstrength-reduce -fomit-frame-pointer -finline-functions -nostdinc -fno-builtin -c -o dirty.o dirty.c

system.o: system.c
	$(CC) -Wall -O -fstrength-reduce -fomit-frame-pointer -finline-functions -nostdinc -fno-builtin -c -o system.o system.c

clean:
	rm -f start.o kernel.bin main.o dirty.o system.o
