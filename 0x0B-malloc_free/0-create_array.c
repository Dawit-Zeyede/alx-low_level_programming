#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
  * create_array - create array of a char with unknown value.
  * @n: size of an array.
  * @c: character to be stored.
  */
char *create_array(unsigned int size, char c)
{
	while (size != 0)
	{
		char *str;

		str = malloc(sizeof(char) * size);
		str[0] = c;
		return str;
	}
	return (NULL);
}
