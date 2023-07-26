#include "main.h"
/**
  * puts2 - print a string.
  * @str: string to be printed.
  * Return: end of the program.
  */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len += 1;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
}
