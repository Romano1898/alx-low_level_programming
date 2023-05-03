#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to a pointer to head of list
 *
 * Return: (no return)
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	}
}
