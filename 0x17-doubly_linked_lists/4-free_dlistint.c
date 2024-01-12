#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a listint_t list
 * @head: head of the list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head);
	}
	free(head);
}
