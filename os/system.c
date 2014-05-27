#include "system.h"

unsigned char *memcpy(unsigned char *dest, const unsigned char *src, int count)
{
    while (count--)
        *dest++ = *src++;

    return dest;
}

unsigned char *memset(unsigned char *dest, unsigned char val, int count)
{
    while (count--)
        *dest++ = val;

    return dest;
}

unsigned short *memsetw(unsigned short *dest, unsigned short val, int count)
{
    while (count--)
        *dest++ = val;

    return dest;
}

int strlen(const char *str)
{
    /*decltype(strlen(nullptr))*/int count = 0;
    while (*str++)
        ++count;

    return count;
}
