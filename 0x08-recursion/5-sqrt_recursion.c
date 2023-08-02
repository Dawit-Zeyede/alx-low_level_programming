#include "main.h"
int _calculator(int n, int i);
/**
  * _sqrt_recursion - natural square root of a number.
  * @n: number.
  * Return: end of the program.
  */
int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	return (_calculator(n, i));
}
/**
  * _calculator - calculator for sqrt.
  * @n: number.
  * @i: checking number.
  * Return: end of the program.
  */
int _calculator(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_calculator(n, i + 1));
}
