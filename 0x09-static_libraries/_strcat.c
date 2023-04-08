#include "main.h"

/**
 * *_strcat - joins two strings
 * @dest: destination string
 * @src: string to be appended to dest
 * Return: joined string
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
