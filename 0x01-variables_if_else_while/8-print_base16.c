#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int m;
for (n = 0; n <= 9; ++n)
{
putchar(48 + n);
}
for (m = 0; m <= 5; ++m)
{
putchar(97 + m);
}
putchar('\n');
return (0);
}
