#include "main.h"
/**
  * print_triangle - print \ diagonally
  * @n: length of the diagonal
  * Return: end of the program
  */

void print_triangle(int n)
{
	int i;
	int j;
	int m;
	int k;

	k = n;
	if (n > 0)
		for (i = 1; i <= n; i++)
		{
			for (m = 1; m < k; m++)
			{
				_putchar(' ');
			}
			k--;
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}

