#include <stdio.h>
/**
  * main - print the largest prime factor
  *
  * Return: end of the file
  */

int main(void)
{
	unsigned long int num;
	unsigned long int max;
	unsigned long int i;
	unsigned long int j;
	int prime;

	num = 612852475143;
	max = 2;
	prime = 1;
	for (i = 2; i <= (num / 2); i++)
	{
		for (j = 2; j <= (i / 2); j++)
		{
			if (i % j == 0)
				prime = 0;
		}
		if (prime == 1)
		{
			if (num % i == 0)
			{
				max = i;
			}
		}
	}
	printf("%lu", max);
	return (0);
}
