#ifndef SYSTEM_H
#define SYSTEM_H

/* TODO: this interface is complete shit. CHANGE IT! */

unsigned char *memcpy(unsigned char *dest, const unsigned char *src, int count);
unsigned char *memset(unsigned char *dest, unsigned char val, int count);
unsigned short *memsetw(unsigned short *dest, unsigned short val, int count);
int strlen(const char *str);

#endif // SYSTEM_H
