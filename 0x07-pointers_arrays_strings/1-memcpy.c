#include "holberton.h"
/**
 *_memcpy - a function that copies memory area to memory area
 *@dest: destination string
 *@src: source string
 *@n: unsigned integer
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
