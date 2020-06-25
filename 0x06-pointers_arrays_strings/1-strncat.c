#include "holberton.h"
/**
 *_strncat - a function that concatenates two integers.
 *@dest: char
 *@src: char
 *@n: int
 *Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)
{
}
for (b = 0; b < n && src[b] != '\0'; b++)
{
dest[a + b] = src[b];
}
return (dest);
}
