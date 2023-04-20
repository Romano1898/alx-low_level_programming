#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds all integers passed to the function
 *
 * @n: Number to add to other integers passed to function
 *
 * Return: Sum of numbers (Success),  0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
  if (n != 0)
    {
  int sum = 0;
  int i;
  va_list args;
  va_start(args, count);
  for (i = 0; i < count; i++)
    {
      sum += va_arg(args, int);
    }
  va_end(args);
  return sum;
    }
  else
    {
      return 0;
    }
}
