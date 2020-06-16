#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 *
 *print_alphabet - function that prints alphabet from a to z.
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
