#include "main.h"

/**
 * searcher - Guesses square root of n.
 * _sqrt_recursion - Determines square root of a number.
 * @guess: Is the initial guess of the square root of n. Is n / 2.
 * @n: Input integer
 * Return: guesses within and out of the error tolerance.
 */

int searcher(int n, int guess)
{
int new_guess;
int error;
error = 1;
guess = n / 2;
new_guess = (guess + n / guess) / 2;
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
 * _sqrt_recursion - Determines square root of a number.
 * @n: Input integer
 * Return: Square root of n
 */
int _sqrt_recursion(int n)
{
int guess;
int result;
guess = n / 2;
result = searcher(n, guess);
if (n < 0)
{
return (-1);
}
if (result == -1)
{
return (-1);
}
return (result);
}
