#include "lists.h"
/**
 * dlistint_le - count nodes.
 * @h: head of the list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
