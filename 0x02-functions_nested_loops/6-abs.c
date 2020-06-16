#include "holberton.h"
/**
 *_abs - a function that computes the absolute value of an integer.
 *@n: int
 *Return: return value zero (success)
*/
int _abs(int)
{
int n;
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
}
