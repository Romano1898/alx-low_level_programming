#include "main.h"

/**
* more_numbers - Prints numbers from one to fourteen
*
*/

void more_numbers(void)
{
int num;
int count;
 for (count = 0; count < 14; count++)
{
for (num = 0; num <= 14; ++num)
{
_putchar('0' + num);
}
_putchar('\n');
}
}
