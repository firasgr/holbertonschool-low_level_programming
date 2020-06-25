#include "holberton.h"
/**
 * reverse_array - a function that reverses an array.
 *@a: integer
 *@n: integer
 */
void reverse_array(int *a, int n)
{
int b, c;
c = 0;
n = n - 1;
for (b = 0; b < n / 2; b++)
{
c = a[b];
a[b] = a[n - b];
a[n - b] = c;
}
}
