#include "holberton.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alphabet in lowercase.
*/
void print_alphabet_x10(void)
{
char alpha;
int count;
alpha = 'a';
for (int count = '0'; count <= '9'; count++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
}
_putchar('\n');
}
