#include "main.h"
/**
  * jack_bauer - prints all combinations
  *
  * Return: end of the program
  */
void jack_bauer(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (m = 48; m < 54; m++)
			{
				for (n = 48; n < 58; n++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(m);
					_putchar(n);
					_putchar('\n');
					if ((i == 50 && j == 51) && (m == 53 && n == 59))
					{
						break;
					}
				}
			}
		}
	}
}
