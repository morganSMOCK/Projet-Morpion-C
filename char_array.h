#ifndef CHAR_ARRAY_H
#define CHAR_ARRAY_H

extern void display_grid(char (*grid)[3]);
extern void init_grid(char (*grid)[3], char c);
extern void update_grid(char (*grid)[3], char c, int x, int y);

#endif