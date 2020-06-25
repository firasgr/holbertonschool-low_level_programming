#include "holberton.h"
/**
 *_strncpy - a function that swipes two integers.
 *@dest: char
 *@src: char
 *@n: int
 *Return: a pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[a] = src[a];
}
for ( ; a < n; a++)
{
dest[a] = '\0';
}
return (dest);
}