#include "main.h"

/**
 * *_strpbrk - searches string for any set of bytes
 * @s: String to be searched
 * @accept: Set of bytes to search for in s
 * Return: pointer to the byte in s that matches byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
char *p, *c;

for (p = str; *p != '\0'; i++)
{
for (c = accept; *c  != '\0'; j++)
{
if (*c == *p)
{
return (*p);
}
}
}
return ('\0');
}
