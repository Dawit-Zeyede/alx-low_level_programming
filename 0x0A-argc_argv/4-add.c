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
	int i;
	int j;

	positive_sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (*argv[i] < '0' && *argv[i] > '9')
		{
			printf("Error\n");
			return (0);
		}
	}
	for (j = 1; j < argc; j++)
	{
		positive_sum += atoi(argv[i]);
	}
	printf("%d\n", positive_sum);
	return (0);
}
