#include <stdio.h>

/**
*main - Entry point
*
*Return: 0 (Success)
*/
int main(void)
{
int al;
for (al = 0; al <= 8; al++)
{
putchar('0' + al);
putchar(',');
putchar(' ');
}
putchar('9' + ' ');
return (0);
}
