#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
  * create_array - create array of a char with unknown value.
  * @size: size of an array.
  * @c: character to be stored.
  * Return: end of the program.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *strarr;

	if (size == 0)
		return (NULL);
	strarr = malloc(sizeof(char) * size);
	if (strarr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		strarr[i] = c;
	return (strarr);
}
