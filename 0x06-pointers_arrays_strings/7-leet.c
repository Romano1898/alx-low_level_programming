#include "main.h"

/**
 * *leet - Encodes string to 1337
 * @str: String to be encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
int k = 0, count;
char lets[] = {'a', 'e', 'o', 't', 'l'};
char num[] = {'4', '3', '0', '7', '1'};

while (str[k] != '\0')
{
for (count = 0; count < 5; count++)
{
if ((str[k] == lets[count]) || (str[k] == (lets[count] - 32)))
{
str[k] = num[count];
}
}
k++;
}
return (str);
}
