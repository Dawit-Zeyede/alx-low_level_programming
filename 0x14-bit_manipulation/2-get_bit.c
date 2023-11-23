#include "main.h"
/**
 * get_bit - returns the value of a bit ar a given index.
 * @n: Decimal value to be evaluated.
 * @index: index where a bit value is retured.
 * Return: value to be returned.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;
	unsigned long int checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	val = 1 << index;
	checker = n & val;
	if (checker == val)
		return (1);
	return (0);
}
