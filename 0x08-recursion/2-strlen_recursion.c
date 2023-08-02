#include "main.h"
/**
  * _strlen_recursion- counting a string recursively.
  * @s: address of a string to be counted.
  *
  * Return: end of the program.
  */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len += 1;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
