#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to head of list
 * @n: integer to be stored
 *
 * Return: address of the new element, if fail (NULL)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *j;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	*head = node;
	else
	{
	j = *head;

	while (i->next != NULL)
	j = j->next;
	j->next = node;
	}
	return (node);
}
