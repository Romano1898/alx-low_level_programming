#include "main.h"

/**
 * _strlen_recursion - Displays length of a string
 * @s: String whose length will be determined
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
