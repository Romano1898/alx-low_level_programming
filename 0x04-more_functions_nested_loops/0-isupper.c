#include "main.h"

/*
 * _isupper - Checks if character is uppercase
 *
 * Return: 1 if character is uppercase, 0 is lowercase
 * @c: Character to be checked
 */

int _isupper(int c)
{

if ((c >= 65) && (c <= 90))
{
return (1);
}
if ((c >= 97) && (c <= 122))
{
return (0);
}
}
