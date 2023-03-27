#include "main.h"

/**
 * _strlen - determines length of string
 * @s: stores a single character of the string
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0;

while (*s != 'NULL')
{
i++;
}
return (i);
}
