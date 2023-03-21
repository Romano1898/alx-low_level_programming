#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 *
 * Return: Last digit
 *@n: Number to be checked
 */

int print_last_digit(int n)
{
int f = n % 10;

if (f < 0)
{
int m = -1 * f;
_putchar('0' + m);
return (m);
}
else
{
_putchar('0' + f);
return (f);
}
}
