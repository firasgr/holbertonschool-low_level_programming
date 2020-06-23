#include "holberton.h"
/**
 *print_rev - function that prints a string in reverse.
 *@s: char
*/
void print_rev(char *s)
{
char *a = s;
while (*s != '\0')
{
s++;
}
while (s != a)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
