#include "main.h"
/**
  * print_alphabet_x10  - print lowercase letters
  *
  * Return: void
  */

void print_alphabet_x10(void)
{

	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 25; j++)
			_putchar(alpha[j]);
		_putchar('\n');
	}
}
