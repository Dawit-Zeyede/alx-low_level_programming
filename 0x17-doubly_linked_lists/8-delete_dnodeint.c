#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given index from dlistint_t.
 * @head: pointer to pointer towards head of the list.
 * @index: position of node to be deleted.
 * Return: 1 - success or -1 - failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;

	if (*head == NULL)
		return (-1);
	h = *head;
	for(; index != 0; index--)
	{
		if (h == NULL)
			return (-1);
		h = h->next;
	}
	if (h == *head)
	{
		*head = h->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		h->prev->next = h->next;
		if (h->next != NULL)
			h->next->prev = h->prev;
	}
	return (1);
}
