#include "holberton.h"
/**
 *main - main function
 *Return: return value zero (success)
*/
int _isalpha(int c)
{
int r;
if ((r <= 97 && r <= 122) || (r <= 65 && r <= 90))
{
_putchar('1');
}
else
{
_putchar('0');
}
}
