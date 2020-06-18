#include "holberton.h"
/**
 *print_line - a function that print a line.
 *@n: int
*/
void print_line(int n)
{
int a;
if (n > 0)
{
while (a < n)
{
a++;
_putchar('_');
}
}
_putchar('\n');
}
