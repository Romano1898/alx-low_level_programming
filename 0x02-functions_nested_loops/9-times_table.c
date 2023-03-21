#include "main.h"

/**
 * times_table - Prints 9 times table from 0
 */

void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c <= 9)
{
_putchar('0' + (c));
_putchar(',');
_putchar('\t');
}
if (c > 9)
{
_putchar('0' + (c / 10));
_putchar('0' + (c % 10));
_putchar(',');
_putchar('\t');
}
}
_putchar('\n');
}
}
