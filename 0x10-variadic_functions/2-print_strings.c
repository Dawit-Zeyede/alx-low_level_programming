#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_strings - print strings
  * @separator: separator in beteween strings.
  * @n: number of strings.
  * ...: strings to be printed.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list argv;

	va_start(argv, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(argv, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argv);
}
