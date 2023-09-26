#include "lists.h"
/**
  * free_listint2 - frees a linked list.
  * @head: a pointer to pointer of first node.
  * Return: end of the program.
  */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *present;

	present = *head;
	while (*head != NULL)
	{
		next = present->next;
		free(*head);
		*head = next;
	}
	free(present);
	free(next);
	*head = NULL;
}
