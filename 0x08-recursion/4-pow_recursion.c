#include "main.h"
/**
  * _pow_recursion - calculate x power of y recursively.
  * @x: number to be powered.
  * @y: number of times.
  * Return: end of the program.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y -= 1;
	return (x * _pow_recursion(x, y));
}
