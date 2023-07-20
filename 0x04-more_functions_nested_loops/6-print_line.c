#include "main.h"
/**
  * print_line - print -*n
  * @n: length of the line.
  * Return: end of the program.
  */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
