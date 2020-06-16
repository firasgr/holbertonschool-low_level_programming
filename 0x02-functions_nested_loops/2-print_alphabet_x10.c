#include "holberton.h"
/**
 *main - main function
 *Return: return value zero (success)
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
