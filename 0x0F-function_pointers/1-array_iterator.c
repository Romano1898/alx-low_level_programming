#include "function_pointers.h"


/**
 * array iterator - Displays each element of an array given as a pointer
 * 
 * @array: pointer to array
 * @size: size of array
 * @action: function that displays an iteration of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL || action != NULL)
{
while (size-- > 0)
{
action(*array);
array++;
}
}
}
