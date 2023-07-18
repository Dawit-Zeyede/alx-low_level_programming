#include "main.h"
/**
  * times_table - prints 9*9 table
  *
  * Return: end of the program
  */
void times_table(void)
{
	int i;
	int j;
	int m;
	int n;
	int o;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (m > 9)
			{
				n = m % 10;
				o = (m - n) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(o + '0');
				_putchar(n + '0');
			}
			else
			{
				if(j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(o + '0');
			}
		}
		_putchar('\n');
	}
}
