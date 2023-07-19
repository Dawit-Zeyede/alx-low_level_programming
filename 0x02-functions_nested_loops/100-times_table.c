#include "main.h"
#include <stdio.h>
/**
  * print_times_table - print a time table
  * @n: n*n table
  * Return: end of the file.
  */

void print_times_table(int n)
{
	int i;
	int j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int res;
			res = i *j;
			if (j < n)
				printf("%d ,", res);
			else
				printf("%d", res);
		}
		_putchar('\n');
	}
}
