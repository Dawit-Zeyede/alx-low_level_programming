#include "lists.h"
/**
  * listint_len - number of elements in a list.
  * @h: address of the first node.
  * Return: end of the function.
  */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
