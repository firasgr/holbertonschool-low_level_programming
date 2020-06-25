#include "holberton.h"

/**
 *_strcat - function that concatenates 2 strings.
 *@dest: char
 *@src: char
 *Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
dest[a] = src[0];
b = 1;
while (src[b] != '\0')
{
dest[a + b] = src[b];
b++;
}
dest[a + b + 2] = '\0';
return (dest);
}
