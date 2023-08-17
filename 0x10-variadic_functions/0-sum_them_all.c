#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - sum the numbers given as arguments.
  * @n: number of arguments.
  * ...: arguments.
  * Return: end of the program.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list argv;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(argv, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argv, int);
	va_end(argv);
	return (sum);
}
