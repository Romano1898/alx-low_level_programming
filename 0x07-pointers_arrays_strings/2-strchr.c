#include "main.h"

/**
 * *_strchr - locates character in a string
 * @s: String to be checked for character
 * @c: Character to search for
 * Return: pointer to first occurrence of c, or NULL if character isn't found
 */

char *_strchr(char *s, char c)
{

while (*s != c && *s != '\0')
{
s++;
}

if (*s == c)
{
return (s);
}
else
{
return('\0');
}
}
