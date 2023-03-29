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
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}
while (n > 0 && *src != '\0')
{
*ptr++ = *src++;
n--;
}
*ptr = '\0';
return (dest);
}
