#include "main.h"

/**
* print_most_numbers - Prints numbers from zero to nine, excluding 2 and 4.
*
* Return: 0 Always success
*/

void print_most_numbers(void)
{
int num;

for (num = 0; num <= 9; ++num)
{
if ((num != 2) && (num != 4))
{
_putchar('0' + num);
}
}
_putchar('\n');
}
