#include "lists.h"
/**
  * get_nodeint_at_index - get the address of a node at a given index.
  * @head: address of the first node.
  * @index: index of a  node to be returned.
  * Return: address of the indexede node.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *first;
	unsigned int i;

	first = head;
	for (i = 0; i < index; i++)
	{
		if (first->next != NULL)
			first = first->next;
		else
			return (NULL);
	}
	return (first);
}
