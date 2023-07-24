#include "main.h"
/**
  * _puts - print a string.
  * @str: string to be printed.
  * Return: end of the program.
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
