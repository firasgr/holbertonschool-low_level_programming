#include "holberton.h"
/**
* _strcpy - function that copies string.
* @dest: char
* @src: char
* Return: dest.
*/
char *_strcpy(char *dest, char *src)
{
int a, b;
b = 0;
while (src[b] != '\0')
{
b++;
}
for (a = 0; a <= length; a++)
{
dest[a] = src[a];
}
return (dest);
}
