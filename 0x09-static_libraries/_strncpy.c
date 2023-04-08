#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: destination string
 * @src: Source string to be copied from
 * @n: Number of characters to duplicate
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
