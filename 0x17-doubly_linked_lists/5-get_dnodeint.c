#include "lists.h"
/**
 * get_dnodeint_at_index - nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: index of the node to be returned.
 * Return: adddress of the first node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	n = 0;
	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n += 1;
	}
	return (NULL);
}
