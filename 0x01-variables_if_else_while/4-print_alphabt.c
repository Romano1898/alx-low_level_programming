#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
char al;

for (al = 'a'; al < 'z'; al++)
{
if (al != 'e' || al != 'q')
{
putchar(al);
}
}
return (0);
}
