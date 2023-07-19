#include <stdio.h>

/**
  * main - print the first 50 fibonacci sequence with out the first element.
  *
  * Return: end of the program.
  */

int main(void)
{
	int i;
	long int n1;
	long int n2;
	long int next;

	n1 = 1;
	n2 = 2;
	printf("%ld ,%ld ,", n1, n2);
	for (i = 1; i < 49; i++)
	{
		next = n1 + n2;
		if (i != 48)
		{
			printf("%ld, ", next);
			n1 = n2;
			n2 = next;
		}
		else
			printf("%ld\n", next);
	}
	return (0);
}

