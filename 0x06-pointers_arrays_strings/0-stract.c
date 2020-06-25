#include "holberton.h"

/**
 *_strcat - function that concatenates 2 strings.
 *@dest: char
 *@src: char
 *Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)
{
}
for (b = 0; src[b] != '\0'; b++)
{
dest[a + b] = src[b];
}
return (dest);
}
