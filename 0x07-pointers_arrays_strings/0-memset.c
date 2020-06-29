#include "holberton.h"
/**
 *_memset - function fills the first n bytes of the memory area
 *@s: character
 *@b: character
 *@n: integer
 *
 * Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n ; a++)
{
s[a] = b;
}
return (s);
}
