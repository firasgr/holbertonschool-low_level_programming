#include "holberton.h"

/**
 * puts_half - prints half of the string
 *
 * @str: Value of input of string
 */
void puts_half(char *str)
{
int a, b;
a = 0;
b = 0;
while (str[a] != '\0')
{
a += 1;
}
if (a % 2 == 0)
{
b = a / 2;
}
else
{
b = (a + 1) / 2;
a = a - 1;
}
while (b <= a)
{
_putchar(str[b]);
b++;
}
_putchar('\n');
}
