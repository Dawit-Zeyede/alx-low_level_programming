#include "main.h"
/**
  * print_last_digit - last digit printer
  * @
  * Return: end of the program
  */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;
	return (last);
}
