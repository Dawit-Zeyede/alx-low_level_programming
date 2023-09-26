#include "lists.h"
/**
  * insert_nodeint_at_index - add a new node at a given position.
  * @head: a pointer to pointer to first node.
  * @idx: a position where new node is added.
  * @n: data to be filled in a new node.
  * Return: address of the new node.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *reserve;
	listint_t *list;
	unsigned int i;

	i = 0;
	idx = idx - 1;
	list = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (new == NULL)
		return (NULL);
	while (list->next != NULL)
	{
		if (i == idx)
		{
			reserve = list->next;
			list->next = new;
			new->next = reserve;
			return (new);
		}
		list = list->next;
		i += 1;
	}
	return (NULL);
}
