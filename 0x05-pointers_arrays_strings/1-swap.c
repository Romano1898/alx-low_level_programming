#include "main.h"

/**
 * swap_int - swaps value of integers
 * @a: first number
 * @b: second number
 */

void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
