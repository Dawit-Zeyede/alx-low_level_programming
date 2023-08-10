#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * array_range - creates an array of integers.
  * @min: the first element of an array.
  * @max: the second element of an array.
  * Return: end of the program.
  */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *array;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}
