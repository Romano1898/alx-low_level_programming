#include "main.h"

/**
 * *_strcat - joins two strings
 * @dest: destination string
 * @src: string to be appended to dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0. j = 0;

while (src[i] != '\0')
{
i++;
}
while (dest[j] != '\0')
{
src[i]=dest[j];
j++;
i++;
}
return(*dest);
}
