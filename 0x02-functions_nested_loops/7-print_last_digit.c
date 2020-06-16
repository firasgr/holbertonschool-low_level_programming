#include "holberton.h"
/**
 *print_last_digit -  a function that prints the last digit of a number.
 * @n: int
 *Return: 0 or 1
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = (n % 10) * -1;
_putchar(n + '0');
}
else
{
n = n % 10;
_putchar(n + '0');
}
return (n);
}
