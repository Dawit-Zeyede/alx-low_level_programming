#include "lists.h"
/**
  * add_node_int_end - adds a new node at the end of a listint_t list.
  * @head: address to an address of a last node.
  * @n: number to be filled.
  * Return: end of the program.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old;

	old = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (old == NULL)
	{
		*head = new;
		return (new);
	}
	old->next = new;
	*head = old->next;
	return (new);
}
