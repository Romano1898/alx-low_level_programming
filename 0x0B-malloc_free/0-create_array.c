#include "main.h"

/**
 * *create_array - Creates array of chars and initialises.
 *
 * @size: Size of array
 * @c: Character to initialise with
 *
 * Return: Pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
{
return ('\0');
}
array = malloc(sizeof(char) * size);
if (array == '\0')
{
return ('\0');
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
