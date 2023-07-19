#include <stdio.h>
/**
  * main - multiples and their sum.
  *
  * Return: end of the program
  */

int main(void)
{
	int i;
	int so3;
	int so5;
	int sum;

	so3 = 0;
	so5 = 0;
	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0))
			so3 += i;
		else if ((i % 5 == 0))
			so5 += i;
	}
	sum = so3 + so5;
	printf("%d", sum);
	printf("\n");
	return (0);
}
