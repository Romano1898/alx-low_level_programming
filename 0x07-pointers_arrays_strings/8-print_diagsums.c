#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: Numbers of matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
int i, sum1, sum2;

	for (i = 0; i < size; i++)
{
	sum1 += *(a + i * size + i);
	sum2 += *(a + i * size + size - i - 1);
}
	printf("%d, %d\n", sum1, sum2);
}
