#include "main.h"

/**
 * rev_string - Reverses string
 *
 * @s: Character of string
 */

void rev_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
for (i--; s[i] >= 0; i--)
{
_putchar(s[i]);
}
}
