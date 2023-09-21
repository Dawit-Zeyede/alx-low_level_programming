#include "lists.h"
/**
  * list_len - number of elements in a linked list.
  * @h: address of the first node.
  * Return: end of the program.
  */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
