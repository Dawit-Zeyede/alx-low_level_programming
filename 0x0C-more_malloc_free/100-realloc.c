#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/***
  *
  *
  *
  *
  *
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	old = ptr;
	new = malloc(new_size);
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
		new[i] = old[i];
	new[new_size] = '\0';
	free(ptr);
	return (new);
}
