#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: String whose prefix will be measured
 * @accept: Substring prefix to look for in s
 * Return: number of bytes in prefix of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

if (s == '\0' && accept == '\0')
{
return (0);
}
else
{
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
return (i);
}
}
return (i);
}
}
