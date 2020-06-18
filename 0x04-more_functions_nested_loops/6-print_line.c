#include "holberton.h"
/**
 *print_line - a function that print a line.
 *@n: int
*/
void print_line(int n)
{
int a = 0;
for (a = 0; a < n; a++)
{
if (n > 0)
{
_putchar('_');
}
else
{
_putchar('\n');
}
}
}
