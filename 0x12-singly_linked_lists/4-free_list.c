#include "lists.h"
/**
  * free_list - free spaces taken by a list.
  * @head: address of the first node.
  * Return: end of the program.
  */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
