#include "main.h"

/**
 * *rot13 - Encodes string in rot13
 * @str: String to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
int k = 0, count;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[k] != '\0')
{
for (count = 0; count < 52; count++)
{
if (str[k] == alphabet[count])
{
str[k] = rot13key[count];
break;
}
}
k++;
}
return (str);
}
