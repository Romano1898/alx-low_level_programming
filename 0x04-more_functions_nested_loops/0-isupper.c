#include "main.h"

/**
*_isupper - Entry point
*
*Return: 1 if character is uppercase, 0 is lowercase
* @c: Character to be checked
*/

int _isupper(int c)
{

if ((c >= 65) && (c <= 90))
{
return (1);
}
else
{
return (0);
}
}
