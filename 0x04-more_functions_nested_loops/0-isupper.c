#include "main.h"

/**
  * _isupper - check for upper letters.
  * @c - the character to be checked.
  * Return: end of the program.
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
