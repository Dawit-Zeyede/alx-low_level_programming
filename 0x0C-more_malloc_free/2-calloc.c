#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * _calloc - allocates space using calloc funtcion.
  * @nmemb: number of elements in an array.
  * @size: size of each elements.
  * Return: end of the program.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (size == 0 || nmemb == 0)
		return (NULL);
	str = calloc(nmemb, size);
	if (str == NULL)
		return (NULL);
	return (str);
}
