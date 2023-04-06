#include "main.h"

/**
 * searcher - Guesses square root of n.
 * sqrt_recursion - Determines square root of a number.
 * @guess: Is the initial guess of the square root of n. Is n / 2.
 * @n: Input integer
 * Return: guesses within and out of the error tolerance.
 */

int searcher(int n, int guess)
{
int error = 1;
int new_guess = (guess + n / guess) / 2;
if (new_guess < guess)
{
return (-1);
}
else if (new_guess == guess)
{
return (guess);
}
else if ((new_guess - guess) < error)
{
return (new_guess);
}
else
{
return (searcher(n, new_guess));
}
}

/**
 * sqrt_recursion - Determines square root of a number.
 * @n: Input integer
 * Return: Square root of n
 */
int sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
int guess = n / 2;
int result = searcher(n, guess);
if (result == -1)
{
return (-1);
}
return (result);
}
