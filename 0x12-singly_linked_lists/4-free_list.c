#include "lists.h"
/**
  * free_list - free spaces taken by a list.
  * @head: address of the first node.
  * Return: end of the program.
  */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head->len);
		head = head->next;
		free(head->next);
	}
	free(head);
}
