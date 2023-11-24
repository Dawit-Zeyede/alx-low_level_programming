#include "main.h"
/**
 * flip_bits - Calculates number of bits a decimal 'n' would need to be 'm'.
 * @n: Decimal number to be flipped
 * @m: Decimal number desired.
 * Return: end of the program.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit;
	unsigned long int bits;

	bits = n ^ m;
	for (bit = 0; bits > 0;)
	{
		if ((bits & 1) == 1)
			bit += 1;
		bits = bits >> 1;
	}
	return (bit);
}
