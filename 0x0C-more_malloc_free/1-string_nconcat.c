#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings with
 *                   max n bytes from string 2.
 * @s1: First string
 * @s2: Second string
 * @n: max bytes of string 2 to concatenate with s1
 *
 * Return: NULL if function fails. Concatenated string (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = n, index;

for(index = 0; s1[index]; index++)
{
len++;
}

concat = malloc(sizeof(char) * (len + 1));

if (concat == NULL)
return (NULL);

len = 0;

for(index = 0; s1[index]; index++)
concat[len++] = s1[index];

for (index = 0; s2[index] && index < n; index++)
concat[len++] = s2[index];

concat[len] = '\0';
return (concat);
free (concat);
}
