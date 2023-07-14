#include <stdio.h>
/**
 * main - all possible combination of three numbers
 *
 * Return: end of the line
 */

int main(void)
{
	int i;
	int j;
	int m;

	for (i = 48; i < 58; i++)
	{
		for (j = 49 ; j < 58; j++)
		{
			if (i < j)
			{
				for (m = 50; m < 58 ; m++)
				{
					if (j < m)
					{
						putchar(i);
						putchar(j);
						putchar(m);
						if ((i != 55) | (j != 56) | (m != 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

