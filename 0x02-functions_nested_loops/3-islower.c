#include "holberton.h"
/**
 *_islower - function that checks for lowercase character.
 * @c: int
 *Return: 0 or 1
*/
int _islower(int c)
{
int c;
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
