#include "main.h"
/**
  * factorial - calculates factorial recursively.
  * @n: integer to be calculated.
  * Return: end of the program.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
