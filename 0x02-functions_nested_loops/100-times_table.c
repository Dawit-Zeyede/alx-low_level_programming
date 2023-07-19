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

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int res;

				res = i * j;
				if (j < n)
				{
					if ((i * (j + 1) < 10))
						printf("%d,   ", res);
					else if ((i * (j + 1) < 100))
						printf("%d,  ", res);
					else
						printf("%d, ", res);
				}
				else
					printf("%d", res);
			}
			putchar('\n');
		}
	}
}
