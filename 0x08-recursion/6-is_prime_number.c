#include "main.h"
int prime_number(int n, int i);
/**
  * is_prime_number - check for prime number.
  * @n: number to be checked.
  * Return: end of the file.
  */
int is_prime_number(int n)
{
	int i;

	i = n - 1;
	return (prime_number(n, i));
}
/**
  * prime_number - identifier for prime number.
  * @n: number to be cheked.
  * @i: cheking number.
  * Return: end of the program.
  */
int prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number(n, i - 1));
}
