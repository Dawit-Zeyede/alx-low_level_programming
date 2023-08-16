#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - test your program.
  * @argc: number of argument during run time.
  * @argv: array of arguments.
  * Return: end of the program.
  */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opr = argv[2];
	if (get_op_func(opr) == NULL || opr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opr == '/' && b == 0) || (*opr == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opr)(a, b));
	return (0);
}
