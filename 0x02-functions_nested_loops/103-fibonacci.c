#include <stdio.h>

/**
  * main - print the first 50 fibonacci sequence with out the first element.
  *
  * Return: end of the program.
  */

int main(void)
{
	int i;
	unsigned long int n1;
	unsigned long int n2;
	unsigned long int next;
	unsigned long int sum;

	n1 = 1;
	n2 = 2;
	sum = 2;
	for (i = 1; i < 49; i++)
	{
		next = n1 + n2;
		if ((next % 2 == 0) && (next < 4000000))
			sum += next;
	}
	printf("%lu\n", sum);
	return (0);
}

