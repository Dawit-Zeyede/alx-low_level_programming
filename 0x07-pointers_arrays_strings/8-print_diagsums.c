#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - sum of each diagonals.
  * @a: address of a square matrix.
  * n: size of a square matrix.
  * Return: end of the program.
  */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size && j == i; j++)
			sum1 += a[i][j];
	}
	printf("%d", sum1);
	for (i = 0; i < size; i++)
	{
		j -= 1;
		for (; j > 0; j--)
			sum2 += a[i][j];
	}
	printf("%d", sum2);
}
