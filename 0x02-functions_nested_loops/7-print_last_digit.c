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
_putchar(m);
_putchar(m);
}
else
{
_putchar(f);
_putchar(f);
}
return (0);
}
