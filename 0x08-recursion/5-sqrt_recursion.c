#include "main.h"
/**
  * _sqrt_recursion - natural square root of a number.
  * @n: number.
  * Return: end of the program.
  */
int _sqrt_recursion(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i * i == n)
			return i;
	}
	return -1;
}
