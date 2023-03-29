#include "main.h"

/**
 * *_strncat - Concatenates two strings
 *
 * @dest: Destination string
 * @src: Source string to be concatenated with dest
 * @n: Byte limit
 *
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j <= n)
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
