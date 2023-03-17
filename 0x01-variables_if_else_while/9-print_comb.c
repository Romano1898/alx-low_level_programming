#include <stdio.h>

/**
*main - Entry point
*
*Return: 0 (Success)
*/
int main(void)
{
int al;
for (al = 0; al <= 9; al++)
{
putchar((al % 10) + '0');
if (al == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
