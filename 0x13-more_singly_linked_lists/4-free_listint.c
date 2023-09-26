#include "lists.h"
/**
  * free_listint - free a linked list.
  * @head: address of the first node.
  */
void free_listint(listint_t *head)
{
	listint_t *reserve;

	while (head != NULL)
	{
		reserve = head->next;
		free(head);
		head = reserve;
	}
}
