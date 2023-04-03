#include "main.h"

/**
 * *_memcpy - Copies memory area
 *
 * @dest: Pointer to copied memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 * Return: Pointer to copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
src[i] = dest[i];
}
return (dest);
}
