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

	n1 = 1;
	n2 = 2;
	printf("%lu ,%lu ,", n1, n2);
	for (i = 1; i < 97; i++)
	{
		next = n1 + n2;
		if (i != 96)
		{
			printf("%lu, ", next);
			n1 = n2;
			n2 = next;
		}
		else
			printf("%lu\n", next);
	}
	return (0);
}

