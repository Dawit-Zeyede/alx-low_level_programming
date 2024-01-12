#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlinked list.
 * @h: a node which may be a head or not.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	if (h == NULL)
		return (nodes);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
