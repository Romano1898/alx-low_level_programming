#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @str: String to be added
 * @head: pointer to head of list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *node;

	if (head == NULL || str == NULL)
	return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)
	return (NULL);

	node->str = strdup(str);

	if (node->str == NULL)
	{
	free(node);
	return (NULL);
	}

	node->len = _strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}

/**
 * _strlen - Entry point
 *
 * @s: input character
 *
 * Return: (length of string)
 *
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
