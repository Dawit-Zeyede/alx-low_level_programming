#include "main.h"
/**
  * puts2 - print a string.
  * @str: string to be printed.
  * Return: end of the program.
  */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
