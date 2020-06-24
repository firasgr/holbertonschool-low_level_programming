#include "holberton.h"
/**
 *rev_string - function that reverse a string
 *@s: a string
 */
void rev_string(char *s)
{
char a;
int b, c;
b = 0;
while (s[b + 1] != '\0')
{
b++;
}
c = b;
b = 0;
while (b < c / 2 + 1)
{
a = s[b];
s[b] = s[c - b];
s[c - b] = a;
b++;
}
}
