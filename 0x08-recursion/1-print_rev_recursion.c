#include "main.h"
/**
  * _print_rev_recursion - recursively printing string in a revers.
  * @s: string address to be printed.
  * Return: end of the program.
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
