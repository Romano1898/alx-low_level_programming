#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: String to print to standard output
 */

void _puts_recursion(char *s)
{
int i = 0;
while (s[i] !-= '\0')
{
_putchar(s);
}
_putchar('\n');
}
