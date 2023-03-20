#include "main.h"

/**
* _abs - Prints absolute value of a number
*
* Return: Always 0 (Success)
*@n: Number to be checked
*/

int _abs(int n)
{
if (n >= 0)
{
_putchar(n);
}
else
{
int f = -1 * n;
_putchar(f);
}
}
return (0);
