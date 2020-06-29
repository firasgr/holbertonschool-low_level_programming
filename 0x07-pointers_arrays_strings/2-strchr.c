#include "holberton.h"
/**
 *_strchr - a function that locates a character in a string
 * @s: character
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == c)
return (s + a);
}
if (s[a] == c)
return (s + a);
return ('\0');
}
