#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - allocates a desired amount of space.
  * @n: amount to be allocated.
  * Return: ends with 98 for failure.
  */
void *malloc_checked(unsigned int n)
{
	void *str;

	str = malloc(n);
	if (str == NULL)
		exit(98);
	return (str);
}
