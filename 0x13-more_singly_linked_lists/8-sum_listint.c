#include "lists.h"
/**
  * sum_listint - add all of the data of a linked list.
  * @head: address of the first node.
  * Return: sum of datas.
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *first;

	sum = 0;
	first = head;
	if (first == NULL)
		return (0);
	while (first->next != NULL)
	{
		sum += first->n;
		first = first->next;
	}
	sum += first->n;
	return (sum);
}
