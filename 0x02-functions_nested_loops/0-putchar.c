#include <stdio.h>
#include "main.h"
/**
  * main - prints _putchar
  *
  * Return: end of the file
  */

int main(void)
{
	int i = 0;
	char cha[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(cha[i]);
	}
	_putchar('\n');
	return (0);
}
