#include "main.h"

/**
* print_square - prints a square using hashes
* @size: size of square
*/

void print_square(int size)
{
  int c, d;

for (c = 0; c < size; c++)
{
for (d = 0; d < size; d++)
{
_putchar(35);     
}
_putchar('\n');
}
}
