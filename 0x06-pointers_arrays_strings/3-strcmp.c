#include "holberton.h"
/**
 *_strcmp - a function that compares .
 *@s1: char
 *@s2: char
 *Return: a pointer to the resulting string
*/
int _strcmp(char *s1, char *s2)
{
int a;
for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
{
if (s1[a] != s2[a])
return ((int) s1[a] - s2[a]);
}
return (0);
}
