#include "main.h"
#include <stdio.h>
/** natural - multiples and their sum.
  * 
  * Return: end of the program
  */

void natural(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
			printf("%d, ", i);
		}
	}
	printf("%d", sum);
	_putchar('\n');
}
