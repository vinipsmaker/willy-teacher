#ifndef DIRTY_H
#define DIRTY_H

/* TODO (?): Replace unsigned short by uint16_t */

unsigned char inportb (unsigned short port);
void outportb (unsigned short port, unsigned char data);

#endif // DIRTY_H
