#include "main.h"
/**
  * is_palindrome - check for empty string.
  * @s: stirng address to be checked.
  * Return: end of the program.
  */
int is_palindrome(char *s)
{
	int  len;

	len = 0;
	while (*s != '\0')
	{
		len += 1;
		len += is_palindrome(s + 1);
	}
	if (len == 0)
		return (1);
	return (0);
}
