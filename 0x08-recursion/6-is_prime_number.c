#include "main.h"

/**
 * primedet - Checks if a number is prime
 * @n: Input integer
 * @i: Possible prime factors of n
 * Return: 1 if prime. 0 if not.
 */

int primedet(int n, int i)
{
if (n <= 2)
{
return (n == 2);
}
else if (n % i == 0)
{
return (0);
}
else if (i * i > n)
{
return (1);
}
else
{
return (primedet(n, i + 1));
}
}

/**
* is_prime_number - Checks if number is 1 or not
* @n: Input integer
* Return: Pushes to primedet
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (primedet(n, 2));
}
