#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @n: number of bytes of memory area to fill
 * @b: Constant byte that fills memory area
 *
 * Return: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
