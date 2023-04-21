#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by new line
 * @n: Number of args
 * @separator: string printed between strings
 *
 */

void print_strings(const unsigned int n, const char *separator, ...)
{
unsigned int i;
const char *s;
va_list args;
va_start(args, separator);
for (i = 0; i < n; i++)
{
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
