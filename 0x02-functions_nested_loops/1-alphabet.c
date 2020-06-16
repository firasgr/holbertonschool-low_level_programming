#include "holberton.h"
/**
 *print_alphabet - a function that prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
