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

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
}list_t;

size_t print_list(const list_t *h)
{
size_t n = 0;

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
count++;
h = h->next;
}
return (count);
}
