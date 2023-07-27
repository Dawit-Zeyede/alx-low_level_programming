#include "main.h"
/**
  * reverse_array - reverse the value of an array.
  * @a: address of an array to be reversed.
  * @n: no of elements of an array.
  * Return: end of the program.
  */
void reverse_array(int *a, int n)
{
	int i;
	int val;

	for (i = 0; i < n; i++)
	{
		n -= 1;
		val = a[i];
		a[i] = a[n];
		a[n] = val;
	}
}
