#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to be printed in binary
 *
 * Return: (no return)
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
	print_binary(n / 2);
	}
	_putchar('0' + (n % 2));
}