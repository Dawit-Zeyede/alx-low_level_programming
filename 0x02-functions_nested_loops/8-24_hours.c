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
	for (i = 48; i < 52; i++)
	{
		for (j = 48; j < 53; j++)
		{
			for (m = 48; m < 56; m++)
			{
				for (n = 48; n < 59; n++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(m);
					_putchar(n);
					_putchar('\n');
				}
			}
		}
	}
}
