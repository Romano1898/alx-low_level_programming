#include "main.h"

/**
 * puts_half - Outputs half the string
 *
 * @str: Character of string
 */

void puts_half(char *str)
{
int a = 0;
int i = 0;
int c;

while (str[a] != '\0')
{
a++;
}
i = a / 2;

if (i % 2 > 0)
{
for (c = 0; c < i - 1; c++)
{
_putchar(str[c]);
}
}
else
{
for (c = 0; c < i; c++)
{
_putchar(str[c]);
}
}
}
