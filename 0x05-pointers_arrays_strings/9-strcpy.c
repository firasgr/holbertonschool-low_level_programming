#include "holberton.h"
/**
* _strcpy - function that copies string.
* @dest: char
* @src: char
* Return: dest.
*/
char *_strcpy(char *dest, char *src)
{
int a = 0, b;
while (src[a] != '\0')
{
a++;
}
b = 0;
while (b <= a)
{
dest[b] = src[b];
b++;
}
return (dest);
}
