#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list.
 * @idx: position where a new node is inserted.
 * @n: value of the inserted node.
 * Return: pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *cpy;

	cpy = *h;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		for (; idx != 1; idx--)
		{
			cpy = cpy->next;
			if (cpy == NULL)
				return (NULL);
		}
		if (cpy->next == NULL)
			new = add_dnodeint_end(h, n);
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = cpy;
			new->next = cpy->next;
			cpy->next->prev = new;
			cpy->next = new;
		}
	}
	return (new);
}
