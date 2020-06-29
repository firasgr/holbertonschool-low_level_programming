#include "holberton.h"
/**
 * print_chessboard - a function that prints a chessboard
 * @a: char
*/

void print_chessboard(char (*a)[8])
{
int z, b;
for (z = 0; z < 8; z++)
{
for (b = 0; b < 8; b++)
{
_putchar(a[z][b]);
}
_putchar('\n');
}
}
