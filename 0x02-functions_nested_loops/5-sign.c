#include "main.h"

/**
 * print_sign - Checks if character is positive, negative or zero.
 *
 * Return: (1, + if positive, 0, 0 if zero, and -1, - if negative)
 *
 *@n: Character to be checked
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar(',');
_putchar(' ');
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar(',');
_putchar(' ');
_putchar('0');
}
else
{
return (-1);
_putchar(',');
_putchar(' ');
_putchar('-');
}
_putchar('\n');
}
