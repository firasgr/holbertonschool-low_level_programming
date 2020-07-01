#include "holberton.h"
/**
 *factorial - print factorial of given number
 *@n: int
 *Return: 1
 */
int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
if (n < 0)
{
return (-1);
}
return (1);
}
