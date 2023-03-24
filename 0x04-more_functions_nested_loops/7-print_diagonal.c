#include "main.h"

/**
 * print_diagonal - Prints diagonal line using backward slashes
 * @n: number of slashes
 */

void print_diagonal(int n)
{
int c;

if (n <= 0)
{
_putchar('\n');
}
for (c = 1; c <= n; ++c)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
