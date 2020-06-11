#include <stdio.h>
/**
*main - main function
*Return: return value zero (success)
*/
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
