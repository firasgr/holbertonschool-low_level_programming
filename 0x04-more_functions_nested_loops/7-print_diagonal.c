#include "holberton.h"
/**
 *print_numbers - a function that draws a diagonal line on the terminal.
 *@n: int
*/
void print_numbers(int n)
{
int a, b;
a = 0;
if (n > 0)
{
while (a < n)
{
b = 0;
while (b < a)
{
_putchar(' ');
++b;
}
++a;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
