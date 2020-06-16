#include "holberton.h"
/**
 *print_alphabet - a function that prints the alphabet in lowercase .
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
