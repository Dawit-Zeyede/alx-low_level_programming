#include "main.h"
/**
  * _abs- print the sign of the number
  * @c: check for a number
  * Return: end of the program
  */

int _abs(int c)
{
	int val;

	if (c < 0)
	{
		val = c * -1;
		return (val);
	}
	else
		return (c);
}

