#include <stdio.h>

/**
 * print_array - Prints array of integers
 *
 * @a: holds value of array at position n
 * @n: number of elements of array
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
