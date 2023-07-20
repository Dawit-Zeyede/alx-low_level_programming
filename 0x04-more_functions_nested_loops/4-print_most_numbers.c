#include "main.h"
/**
  * print_most_numbers - print 0-9
  *
  * Return: end of the program.
  */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
