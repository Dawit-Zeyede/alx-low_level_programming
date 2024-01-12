#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a node at the beginning of a dlistint_t list.
 * @head: pointer to a pointer towards a head.
 * @n: data for the new node.
 * Return: address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *old;
	dlistint_t *new;

	old = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = old;
	if (old != NULL)
		old->prev = new;
	*head = new;

	return (new);
}
