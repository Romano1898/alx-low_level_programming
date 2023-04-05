#include "main.h"

/**
 * _pow_recursion - Returns x to the power y
 * @x: Base
 * @y: Exponent
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
return (base * _pow_recursion(base, y - 1));
}
