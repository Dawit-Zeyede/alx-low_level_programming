#include "main.h"
/**
  * set_bit - sets value of a bit at a given index to 1.
  * @n: address of a given decimal.
  * @index: position of bit to be 1.
  * Return: end og the program.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
