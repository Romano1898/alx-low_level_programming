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

while (str[a] != '\0')
{
a++;
}
i = a / 2;
int c = 0;
if (i % 2 > 0)
{
for (c; c < i - 1; c++)
{
_putchar(str[c]);
}
}
else
{
for (c; c < i; c++)
{
_putchar(str[c]);
}
}
}
