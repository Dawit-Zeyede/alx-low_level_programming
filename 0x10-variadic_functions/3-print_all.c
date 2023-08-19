#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *  print_all - print anything given as an argument.
 *  @format: type of data to be printed.
 *  ...: arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	char *separator;
	va_list argv;

	i = 0;
	va_start(argv, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argv, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(argv, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argv, double));
					break;
				case 's':
					str = va_arg(argv, char *);
					if (!str)
					{
						printf("(nil)");
						break;
					}
					printf("%s%s", separator, str);
					break;
				default:
					i += 1;
					continue;
			}
			separator = ",";
			i += 1;
		}
	}
	printf("\n");
	va_end(argv);
}
