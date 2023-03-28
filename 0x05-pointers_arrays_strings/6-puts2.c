#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: Character of a string
 */

void puts2(char *str)
{
int i = 0;
int c = 0;

while (str[i] != '\0')
{
i++;
}
for (c = 0; c < i; c += 2)
{
_putchar(str[c]);
}
_putchar('\n');
}
