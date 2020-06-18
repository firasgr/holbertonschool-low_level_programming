#include "holberton.h"
/**
 *print_square - a function that prints a square.
 *@size: int
*/
void print_square(int size)
{
int a, b;
if (size > 0)
{
a = 0;
while (a < size)
{
b = 0;
while (b < size)
{
_putchar('#');
b++;
}
_putchar('\n');
a++;
}
}
else
{
_putchar('\n');
}
}
