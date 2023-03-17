#include <stdio.h>

/**
*main - Entry point
*
*Return: 0 (Success)
*/
int main(void)
{
char al;
for (al = 0; al <= 9; ++al)
{
putchar(al);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
