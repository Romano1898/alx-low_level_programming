#include "main.h"

/**
 * *_strchr - locates character in a string
 * @s: String to be checked for character
 * @c: Character to search for
 * Return: pointer to first occurrence of c, or NULL if character isn't found
 */

char *_strchr(char *s, char c)
{
int i = 0;
int *ptr;

while (s[i] != '\0')
{
if (s[i] == c)
{
ptr = &i;
break;
}
else
{
ptr = '\0';
}
i++;
}
return(ptr);
}
