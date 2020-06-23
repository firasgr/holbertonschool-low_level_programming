#include "holberton.h"
/**
 *_puts - function that prints a string.
 *@str: char
*/
void _puts(char *str)
{
int a = 0;
while (*str != '\0')
{
_putchar(*str);
str++;
a++;
}
_putchar('\n');
}
