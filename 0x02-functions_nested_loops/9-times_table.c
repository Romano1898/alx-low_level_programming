#include "main.h"

/**
 * times_table - Prints 9 times table from 0
 */

void times_table(void)
{
int a, b, c, d;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
d = c + b;
if (c <= 9 && b != 9)
{
_putchar('0' + (c));
_putchar(',');
_putchar(' ');
}
else if (c <= 9 && b == 9)
{
_putchar('0' + (c));
}
else if (c <= 9 && d > 9)
{
_putchar('0' + (c));
_putchar(',');
}
else if (c > 9 && b != 9)
{
_putchar('0' + (c / 10));
_putchar('0' + (c % 10));
_putchar(',');
_putchar(' ');
}
else if (c > 9 && b == 9)
{
_putchar('0' + (c / 10));
_putchar('0' + (c % 10));
}
else
{
continue;
}
}
_putchar('\n');
}
}
