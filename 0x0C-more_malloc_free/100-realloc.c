#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * _realloc - reallocate the previous variable.
  * @ptr: variable to be reallocated.
  * @old_size: the size of ptr.
  * @new_size: the size of newly located variable.
  * Return: end of the program.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	old = ptr;
	new = malloc(new_size);
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}
	new[new_size] = '\0';
	free(ptr);
	return (new);
}
