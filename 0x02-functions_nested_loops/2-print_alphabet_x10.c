#include "holberton.h"
/**
 *print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase, followed by a new line.
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
