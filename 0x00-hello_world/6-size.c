#include <stdio.h>
/**
* main - entry point
*
* Return: always 0 (success)
*/
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("size of a char:%i byte(s)\n", sizeof(c));
printf("size of an int:%i byte(s)\n", sizeof(i));
printf("size of a long int:%i byte(s)\n", sizeof(li));
printf("size of a long long int:%i byte(s)\n", sizeof(lli));
printf("size of a float:%i byte(s)\n", sizeof(f));
return (0);
}
