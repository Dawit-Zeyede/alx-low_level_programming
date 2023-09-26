#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at index.
  * @head: a pointer to pointer to first node.
  * @index: a position to be deleted.
  * Return: success or failure.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *list;
	listint_t *reserve;

	list = *head;
	while (list->next != NULL)
	{
		if (i == index)
		{
			reserve = list->next;
			free(*head);
			*head = reserve;
			return (1);
		}
		list = list->next;
	}
	return (0);
}
