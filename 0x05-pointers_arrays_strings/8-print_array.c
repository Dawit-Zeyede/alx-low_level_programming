#include <stdio.h>
#include "main.h"
/**
  * print_array - print array of numbers.
  * @n: the amount to be printerd.
  * @a: the array
  * Return: end of the file.
  */
void print_array(int *a, int n)
{
	int i;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		printf("%d,", a[i]);
	}
	if (i == n)
	{
		printf("%d", a[n]);
	}
	printf("\n");
}
