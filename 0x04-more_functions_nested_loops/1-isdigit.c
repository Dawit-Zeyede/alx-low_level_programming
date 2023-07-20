#include "main.h"
/**
  * _isdigit - check for digit
  * @c: the digit to be checked
  * Return: end of the program
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
