#include "holberton.h"
/**
 *swap_int - a function that swipes two integers.
 *@a: int
 *@b: int
*/
void swap_int(int *a, int *b)
{
int aa = *a;
int bb = *b;
*a = bb;
*b = aa;
}
