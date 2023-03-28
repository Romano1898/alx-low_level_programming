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
if (a % 2 == 0)
{
i = a / 2;
}
else
{
i = (a - 1) / 2;
}
if (i % 2 > 0)
{
for (c = i; c < a; c++)
{
_putchar(str[c]);
}
}
else
{
for (c = i; c < a; c++)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
