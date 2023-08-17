#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_numbers - print numbers given as arguments.
  * @separtor: separator in beteween words.
  * @n: number of integers to be printed.
  * ...: numbers to be printed.
  */
void print_numbers(const char *separtor, const unsigned int n, ...)
{
	unsigned int i;
	va_list argv;

	if (separtor != NULL)
	{
		va_start(argv, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%c ", va_arg(argv, int), *separtor);
		}
		printf("%u\n", va_arg(argv, int));
		va_end(argv);
	}
	else
	{
		va_start(argv, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d ", va_arg(argv, int));
		}
		printf("%u\n", va_arg(argv, int));
		va_end(argv);
	}
}
