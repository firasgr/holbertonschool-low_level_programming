#include "holberton.h"
/**
 *print_most_numbers - a function that prints from 0 to 9 (no 2 or 4).
 *
 *Return: 0
*/
void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (!(a == 2 || a == 4))
{
_putchar(a + '0');
}
else
{
continue;
}
}
_putchar('\n');
return (0);
}
