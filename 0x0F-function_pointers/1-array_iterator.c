#include <stddef.h>
#include "function_pointers.h"
/**
  * array_iterator - executes a fuction on each element of an array.
  * @array: array of integers.
  * @size: size of an array.
  * @action: function address.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
