#include "main.h"
/**
  * swap_int - swap the value of two integers.
  * @a: integer to be swaped.
  * @b: integer to be swaped.
  * Return: end of the program.
  */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
