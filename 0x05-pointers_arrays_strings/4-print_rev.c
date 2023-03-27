#include "main.h"

/**
* print_rev - Prints a string in reverse
*
* @s: Character of the string to be reversed
*/

void print_rev(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
i++;
}
for (i--; s[i] >= 0; i--)
{
_putchar(s[i]);
}
}
