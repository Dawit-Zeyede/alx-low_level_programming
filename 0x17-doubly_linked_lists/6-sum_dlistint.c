#include "lists.h"
/**
 * sum_dlistint - sum all the data(n) of a given list.
 * @head: head of the list to be added.
 * Return: sum of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
