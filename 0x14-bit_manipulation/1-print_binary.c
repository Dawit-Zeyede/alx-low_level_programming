#include "main.h"
/**
 * printer - prints 0's and 1's
 * @value: Decimal number
 */
void printer(unsigned long int n)
{
	if (n == 0)
		return;
	printer(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/** print_binary - printer
 * @n: Decimal number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		printer(n);
}
