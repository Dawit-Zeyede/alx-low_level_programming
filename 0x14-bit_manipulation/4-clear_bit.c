#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Decimal number to be manipulated.
 * @index: index of a bit to be cleared.
 * Return: End of the program.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (n == NULL)
		return (-1);
	val = 1;
	val = val << index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (((*n >> index & 1) & 1) == 1)
		*n = val ^ *n;
	return (1);
}
