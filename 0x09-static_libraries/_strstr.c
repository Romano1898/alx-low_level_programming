#include "main.h"

/**
 * *_strstr - Locates substring in string
 * @needle: substring to locate in haystack
 * @haystack: string to be searched for needle
 * Return: pointer to beginning of substring needle in string haystack
 */

char *_strstr(char *haystack, char *needle)
{
char *p, *c, *s;

for (p = haystack; *p != '\0'; p++)
{
for (c = p, s = needle; *s != '\0' && *c == *s; c++, s++)
{
}
if (*s == '\0')
{
return (p);
}
}
return ('\0');
}
