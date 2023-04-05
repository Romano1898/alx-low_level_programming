#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: String to print to standard output
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
