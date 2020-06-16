#include "holberton.h"
/**
 *jack_bauer -  a function that prints every minute of the day of Jack Bauer
 * @n: int
 *Return: 0 or 1
*/
void jack_bauer(void)
{
int a, b;
for (a = 0 ; a < 24 ; a++)
{
for (b = 0 ; b < 60 ; b++)
{
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
_putchar(':');
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
_putchar('\n');
}
}
return (0);
}
