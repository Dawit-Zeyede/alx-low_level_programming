#include "main.h"
/**
  * _isalpha - check for lowercase characters
  * @c: the charater to be checked
  * Return: end of the program
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
