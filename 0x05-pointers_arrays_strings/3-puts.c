#include "holberton.h"
/**
 *_puts - function that prints a string.
 *@str: char
*/
void _puts(char *str)
{
int a;
for (a = 0; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
