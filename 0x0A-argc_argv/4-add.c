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
	int positive_sum;
	int num1;
	int num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] < '0' || *argv[1] > '9' || *argv[2] < '0' || *argv[2] > '9')
		printf("Error");
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	positive_sum = num1 + num2;
	printf("%d\n", positive_sum);
	return (0);
}
