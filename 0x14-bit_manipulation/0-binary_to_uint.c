#include "main.h"
/**
  * binary_to_uint - converts a binary to an unsigned int.
  * @b: binary in a string.
  * Return: end of the program.
  */
unsigned int binary_to_uint(const char *b)
{
	int n;
	int bit;
	unsigned int decimal;

	n = 1;
	bit = 0;
	decimal = 0;
	if (b == NULL)
		return (0);
	while (b[bit] != '\0')
		bit += 1;
	bit -= 1;
	for (; bit >= 0; bit--)
	{
		if (b[bit] < '0' || b[bit] > '1')
			return (0);
		decimal += ((b[bit] - 48) * n);
		n = n * 2;
	}
	return (decimal);
}
