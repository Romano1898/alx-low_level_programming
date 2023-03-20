#include "main.h"

/**
* _isalpha - Checks is character is alphabetic
*
* Return: 1 if alphabet, 0 if otherwise
*
*@c: Character to be checked
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
