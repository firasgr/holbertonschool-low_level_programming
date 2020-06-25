#include "holberton.h"
/**
 *string_toupper - a function that change lowercase to uppercase.
 *@str: char
 *Return: a pointer to the resulting string
 */
char *string_toupper(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
if (str[a] >= 'a' && str[a] <= 'z')
str[a] = (int) str[a] - 32;
}
return (str);
}
