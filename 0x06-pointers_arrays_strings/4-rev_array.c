#include "main.h"

/**
 * reverse_array - Reverses array of integers
 * @a: Array of integers
 * @n: Number of elements to reverse
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
}
}
