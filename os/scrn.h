#ifndef SCRN_H
#define SCRN_H

void cls();
void putch(unsigned char c);
void puts(unsigned char *str);
void settextcolor(unsigned char forecolor, unsigned char backcolor);
void init_video();

#endif // SCRN_H
