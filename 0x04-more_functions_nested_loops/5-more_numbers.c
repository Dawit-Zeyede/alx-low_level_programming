#include "main.h"
/**
  * more_numbers - print 0-14
  *
  * Return: end of the program
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 0)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
