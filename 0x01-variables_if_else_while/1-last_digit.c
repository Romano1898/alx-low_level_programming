#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*more headers goes there */
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n, div;

srand(time(0));
n = rand() - RAND_MAX / 2;
div = n % 10;
/* your code goes there */
if (div > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, div);
}
if (div < 6 && div > 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, div);
}
if (div == 0)
{
printf("Last digit of %d is %d and is 0\n", n, div);
}
return (0);
}
