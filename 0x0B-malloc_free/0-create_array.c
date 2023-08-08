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
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	i = 0;
	while (size != 0)
	{
		if (str == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
			str[i] = c;
		return (str);
	}
	return (NULL);
}
