#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_numbers - print numbers given as arguments.
  * @separator: separator in beteween words.
  * @n: number of integers to be printed.
  * ...: numbers to be printed.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argv;

	va_start(argv, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argv, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argv);
}
