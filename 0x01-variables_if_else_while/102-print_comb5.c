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

	for (i = 0; i < 100; i++)
	{
		for(j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if ((i != 98) || (j != 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
							
