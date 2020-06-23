#include "holberton.h"

/**
 * puts2 - function that prints every other character.
 * @str: char
*/
void puts2(char *str)
{
int a = 0;
while (*str != '\0')
{
if (a % 2 == 0)
{
_putchar(*str);
}
str++;
a++;
}
_putchar('\n');
}
