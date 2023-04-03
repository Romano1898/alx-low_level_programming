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

for (p = s; *p != '\0'; p++)
{
for (c = accept; *c  != '\0'; c++)
{
if (*c == *p)
{
return (p);
}
}
}
return ('\0');
}
