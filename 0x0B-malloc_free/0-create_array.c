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
	while (size != 0)
	{
		char *str;

		str = malloc(sizeof(char) * size);
		if (str == NULL)
		{
			return (NULL);
		}
		str[0] = c;
		return (str);
	}
	return (NULL);
}
