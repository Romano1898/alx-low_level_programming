#include "main.h"

/**
 * times_table - Prints 9 times table from 0
 */

void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
_putchar('0');
for (b = 1; b <= 9; b++)
{
_putchar(('0' + (a * b));
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
