#include <stdio.h>
/**
 * main - combination of two two digit numbers.
 *
 * return: end of the program
 */

int main(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = 48; i < 58; i++)
	{
		for(j = 48; j < 58; j++)
		{
			for (m = 48; m < 58; m++)
			{
				for (n = 49; n < 58; n++)
					if ((i <= m) | (j < n))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(m);
						putchar(n);
						if ((i != 57) | (j != 56) | (m != 57) | (m != 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
							
