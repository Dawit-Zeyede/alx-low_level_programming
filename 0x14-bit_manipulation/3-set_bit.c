#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at agiven index.
 * @n: address of Decimal number
 * @index: index of a bit to be set.
 * Return: End of the program.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > (sizeof(unsigned long int) * 8 -1))
		return (-1);
	val = 1 << index;
	*n = *n | val;
	return (1);
}
