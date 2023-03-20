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
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
