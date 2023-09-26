#include "lists.h"
/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: address of the first node.
  * Return: number of nodes int a list.
  */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
