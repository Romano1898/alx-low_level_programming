#include "main.h"

/**
 * *string_toupper - Converts string to uppercase
 * @str: String to convert to uppercase
 * Return: Uppercase stringz
 */

char *string_toupper(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
i++;
}
return (str);
}
