#include "main.h"

/**
* print_rev - Prints a string in reverse
*
* @s: Character of the string to be reversed
*/

void print_rev(char *s)
{
int i, c;
i = 0;

while (s[i] != '\0')
{
i++;
}
c = i;
for (c--; s[c] >= 0; c--)
{
_putchar(s[c]);
}
}
