#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a linked list.
  * @head: a pointer to pointer of the second last node.
  * @n: number to be filled in a new node.
  * Return: address of the last node.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		old = *head;
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}
	return (new);
}
