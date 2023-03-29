#include "main.h"

/**
 * *_strncat - Concatenates two strings
 *
 * @dest - Destination string
 * @src - Source string to be concatenated with dest
 *
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (src[i] != '\0' && i <= n)
{
i++;
}
i++;
while (dest[j] != '\0')
{
src[i] = dest[j];
j++;
i++;
}
return (dest);
}
