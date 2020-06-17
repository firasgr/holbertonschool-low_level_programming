#include "holberton.h"
#include "holberton.h"
/**
 *times_table - a function that prints the 9 times table.
 *Return: no return
 */
void times_table(void)
{
int a, b, c;
c = a * b;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
if (c > 9)
{
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
else
{
if (b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(c + '0');
}
}
_putchar('\n');
}
}
