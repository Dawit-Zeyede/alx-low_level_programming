#include "main.h"
/**
  * _puts_recursion - print a string with a recursion.
  * @s: string address to be printed.
  * Return: end of the program.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s += 1;
	_puts_recursion(s);
}
