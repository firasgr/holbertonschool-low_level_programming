#include <stdio.h>
/**
 * print_array - prints an array
 * @a: array
 * @n: int
*/
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; b++)
{
if (b != n - 1)
{
printf("%d, ", a[b]);
}
else
{
printf("%d", a[b]);
}
}
printf("\n");
}
