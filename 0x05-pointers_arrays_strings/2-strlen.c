#include "holberton.h"
/**
 *_strlen - a function that returns the length of a string.
 *@s: char
 *Return: string length (a)
*/
int _strlen(char *s)
{
int a = 0;
while (*s != '\0')
{
a++;
s++;
}
return (a);
}
