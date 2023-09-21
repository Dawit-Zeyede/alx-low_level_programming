#include "lists.h"
/**
  * print_list - prints all elements of a 'list_t' list.
  * @h: address of the first node.
  * Return: number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t count;
	int len;

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
			for (len = 0; h->str[len] != '\0'; len++)
				;
			printf("[%d] %s\n", len, h->str);
		}
		h = h->next;
		count += 1;
	}
	return (count);
}
