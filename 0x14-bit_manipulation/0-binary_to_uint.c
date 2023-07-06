#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - prints unsigned int representation of binary input
 *
 * @b: Binary input
 *
 * Return: Unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;

if (b == NULL)
return (0);

if (b[i] == '0' || b[i] == '1')
{
num <<= 1;
num += b[i] - '0';
i++;
}
else
{
return (0);
}
return (num);
}
