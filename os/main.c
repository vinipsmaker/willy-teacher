#include "system.h"
#include "dirty.h"
#include "scrn.h"

void main()
{
    init_video();
    puts((unsigned char*)"Hello World!");

    /* [[noreturn]] function */
    for (;;);
}
