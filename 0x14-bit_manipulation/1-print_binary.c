#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: integer
 */

void print_binary(unsigned long int n)
{
unsigned long int bit, mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
int i;
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
bit = (n & mask) != 0;
mask >>= 1;
if (bit)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
}
