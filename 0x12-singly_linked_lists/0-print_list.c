#include "lists.h"
/**
  * print_list - prints all elements of a 'list_t' list.
  * @h: address of the first node.
  * Return: number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
	{
		printf("Zero nodes.");
		return (0);
	}
	count = 0;
	while (h != NULL)
	{
		if ((h->str) == NULL)
			printf("[0] (nill)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count += 1;
	}
	return (count);
}
