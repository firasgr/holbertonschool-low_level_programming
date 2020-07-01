#include "holberton.h"
/**
 *_strlen_recursion - length of str
 *@s: str
 *Return: length of str
 */
int _strlen_recursion(char *s)
{
int a = 1;
if (*s == '\0')
{
return (0);
}
a += _strlen_recursion(++s);
return (a);
}
