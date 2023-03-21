#include "main.h"
/**
 * jack_bauer - Prints every minute in a 24 hour cycle
 *
 */

void jack_bauer(void)
{
int b, c, d;
for (b = 0; b <= 23; b++)
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
if (b < 10)
{
_putchar('0');
_putchar('0' + b);
_putchar(':');
_putchar('0' + c);
_putchar('0' + d);
_putchar('\n');
}
if (b >= 10 && b <= 19)
{
int q = b % 10;
_putchar('0' + 1);
_putchar('0' + q);
_putchar(':');
_putchar('0' + c);
_putchar('0' + d);
_putchar('\n');
}
if (b >= 20 && b <= 23)
{
int q = b % 10;
_putchar('0' + 2);
_putchar('0' + q);
_putchar(':');
_putchar('0' + c);
_putchar('0' + d);
_putchar('\n');
}
}
}
}
}

