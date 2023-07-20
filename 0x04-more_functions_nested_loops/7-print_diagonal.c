#include "main.h"
/**
  * print_diagonal - print \ diagonally
  * @n: length of the diagonal
  * Return: end of the program
  */

void print_diagonal(int n)
{
	int i;
	int j;
	int m;

	for (i = 1; i <= n; i++)
	{
		j = i - 1;
		for (m = 0; m < j; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

