#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: destination string
 * @src: Source string to be copied from
 * @n: Number of characters to duplicate
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0, k = 0;

while (dest[i] != '\0')
{
i++;
}
while (k < i)
{
dest[k] = '\0';
k++;  
}
while (src[j] != '\0' && j < n)
{
dest[j] = src[j];
j++;
}
return (dest);
}
