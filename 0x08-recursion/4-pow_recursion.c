#include "main.h"

/**
 * _pow_recursion - Returns x to the power y
 * @x: Base
 * @y: Exponent
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else
{
return ((1 / x) * _pow_recursion(x, y + 1));
}
}
