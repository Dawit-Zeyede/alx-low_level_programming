#include "main.h"
/**
  * _islower - check for lowercase characters
  * @c: the charater to be checked
  * Return: end of the program
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
