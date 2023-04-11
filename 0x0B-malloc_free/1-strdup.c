#include <stdlib.h>

/**
* _strdup - duplicates a string
*
* @str: string to be duplicated
*
* Return: a pointer to the duplicated string, str or no memory (NULL)
*
*/

char *_strdup(char *str)
{
	char *dup;
	int i;
	int len = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[len])
	{
	len++;
	}
dup = (char *) malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	{
	dup[i] = str[i];
	}
	return (dup);
}
