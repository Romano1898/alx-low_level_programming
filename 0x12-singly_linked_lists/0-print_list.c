#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: head of list
 *
 * Return: the number of nodes
 *
 */

size_t print_list(const list_t *h)
{
size_t c = 0;

while (h != NULL)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
c++;
h = h->next;
}
return (c);
}
