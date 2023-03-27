#include "main.h"

/**
* _puts - Prints a string
*
* @str: String to be pushed to standard output
*/

void _puts(char *str)
{
  int i =  0;

while (str[i] != '\0')
{
_putchar(str);
i++;
}
}
