#include "main.h"

/**
* more_numbers - Prints numbers from one to fourteen
*
*/

void more_numbers(void)
{
int num;
int count;
for (count = 0; count <= 14; ++count)
{
for (num = 0; num <= 14; ++num)
{
 if (num > 9)
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
 else
{
_putchar('0' + num);
}
}
_putchar('\n');
}
_putchar('\n');
}
