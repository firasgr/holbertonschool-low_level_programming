#include "holberton.h"
/**
 *main - main function
 *Return: return value zero (success)
*/
void print_alphabet(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
_putchar('\n');
}
}
