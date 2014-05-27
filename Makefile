NASM?=yasm
LD?=ld
DD?=dd

all: floppy.img

bootloader.bin: bootloader.asm
	$(NASM) bootloader.asm -f bin -o bootloader.bin

floppy.img: bootloader.bin
	$(DD) if=/dev/zero of=floppy.img bs=512 count=2880
	$(DD) if=bootloader.bin of=floppy.img conv=notrunc

run: floppy.img
	qemu-system-i386  -boot order=a -fda floppy.img -m 128

clean:
	rm -f bootloader.o bootloader.bin floppy.img
