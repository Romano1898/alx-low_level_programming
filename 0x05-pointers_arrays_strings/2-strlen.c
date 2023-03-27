#include "main.h"

/**
 * _strlen - determines length of string
 * @s: stores a single character of the string
 * Return: length of string
 */

int _strlen(char *s)
{
int len;

 len = 0;

while (s[i] != '\0')
{
len++;
}
return (len);
}
