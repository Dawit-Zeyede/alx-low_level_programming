#include "main.h"
/**
  * get_bit - value of a bit at a specific index.
  * @n: number to be positioned.
  * @index: position of a bit.
  * Return: end to the program.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int at_bit;

	i = 0;
	if (index > (sizeof(int) * 8))
		return (-1);
	while (i < index)
	{
		i += 1;
		n = n >> 1;
	}
	at_bit = n & 1;
	return (at_bit);
}
