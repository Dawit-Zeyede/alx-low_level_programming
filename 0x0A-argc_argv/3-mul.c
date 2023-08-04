#include <stdlib.h>
#include <stdio.h>
/**
  * main - multiplies two numbers.
  * @argc: number of arguments.
  * @argv: array of arguments,
  * Return: end of the program.
  */
int main(int argc, char *argv[])
{
	int product;
	int num1;
	int num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
