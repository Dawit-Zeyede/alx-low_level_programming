#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers that are given as arguments.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: end of the program.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	if (argc <= 1)
	{
		printf("Error");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '0')
			continue;
		num = atoi(argv[i]);
		if (num == 0)
		{
			printf("Error");
			return (1);
		}
		if (num > 0)
			sum += num;
	}
	printf("%d", sum);
	return (0);
}
