#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - displays product of two numbers.
  * @argc: number of arguments.
  * @argv: arrays of string.
  * return: end of the program.
  */
int main(int argc, char *argv[])
{
	unsigned long int num1;
	unsigned long int num2;
	unsigned long int product;
	int i;
	char *arg1;
	char *arg2;

	arg1 = argv[1];
	arg2 = argv[2];
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; arg1[i] != '\0'; i++)
	{
		if (arg1[i] < '0' || arg1[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; arg2[i] != '\0'; i++)
	{
		if (arg2[i] < '0' || arg2[i] > '9')
		{
			printf("error\n");
			exit(98);
		}
	}
	num1 = (unsigned int)atoi(argv[1]);
	num2 = (unsigned int)atoi(argv[2]);
	product = num1 * num2;
	printf("%lu\n", product);
	return (0);
}
