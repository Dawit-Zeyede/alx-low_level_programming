#include "lists.h"
/**
  * pop_listint - deletes the head node of a linked list.
  * @head: a pointer to pointer of first element.
  * Return: Data with in the first element.
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first;
	listint_t *second;

	if (*head == NULL)
		return (0);
	first = *head;
	free(*head);
	data = first->n;
	second = first->next;
	*head = second;
	free(first);
	free(second);
	return (data);
}
