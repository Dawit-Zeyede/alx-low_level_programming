#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the opcodes of its own main function.
  * @argc: number of arguments.
  * @argv: array of arguments.
  * Return: end of the program.
  */
int main(int argc, char *argv[])
{
	int i;
	int value;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < value; i++)
	{
		if (i == value - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
