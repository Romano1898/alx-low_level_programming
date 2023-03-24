#include "main.h"

/**
 * print_diagonal - Prints diagonal line using backward slashes
 * @n: number of slashes
 */

void print_diagonal(int n)
{
int c, d;

if (n > 0)
{
for (c = 0; c < n; c++)
{
for (d = 0; d < c; d++)
{
_putchar(' ');
if (c == n - 1)
{
continue;
}
}
_putchar('\\');
_putchar('\n');
}
}
}
