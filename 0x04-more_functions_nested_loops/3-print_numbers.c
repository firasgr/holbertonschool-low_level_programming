#include "holberton.h"
/**
 *print_numbers - a function that prints the numbers.
 *
 *Return: 0
*/
void print_numbers(void)
{
char a;
for (a = 48; a <= 57; a++)
{
_putchar(a + '0');
}
_putchar('\n');
return (0);
}
