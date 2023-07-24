#include "main.h"
/**
  * print_rev - print a string in a reverse.
  * @s: string to be reverse printed.
  * Return: end of the program.
  */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (*s != '\0')
	{
		len += 1;
		s += 1;
	}
	s -= 1;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s -= 1;
	}
	_putchar('\n');
}
