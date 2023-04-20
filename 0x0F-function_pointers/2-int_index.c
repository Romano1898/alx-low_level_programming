#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @size: Number of elements in array
 * @array: array to be searched
 * @cmp: Pointer to function to be used to compare values
 *
 * Return: Index of first element where cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size == 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
else
{
return (-1);
}
}
return(-1);
}
