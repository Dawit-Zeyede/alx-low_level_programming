#include "main.h"
int checker(char *s, int i, int len);
int counter(char *s);
/**
  * is_palindrome - check for empty string.
  * @s: stirng address to be checked.
  * Return: end of the program.
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, counter(s)));
}
/**
  * counter - counts the string.
  * @s: string to be counted.
  * Return: end of the program.
  */
int counter(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + counter(s + 1));
}
/**
  * checker - palindrome checker.
  * @s: string to be cheked.
  * @i: iterator.
  * @len: length of a string.
  * Return: end of the program.
  */
int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checker(s, i + 1, len - 1));
}
