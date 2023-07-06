#include "main.h"

/**
 * flip_bits - returns the number of bits flipped to get to another number
 *
 * @n: the first number to use
 * @m: the second number to use
 *
 * Return: the number of bits that need to be flipped
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int count = 0;

	i = n ^ m;

	while (i > 0)
	{
	if (i & 1)
	count++;
	i >>= 1;
	}
	return (count);
}
