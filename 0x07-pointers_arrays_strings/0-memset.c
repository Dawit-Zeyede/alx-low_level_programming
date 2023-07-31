#include "main.h"
/**
  * _memset - fills first n memory space by a constant byte.
  * @s: memory space to be filled.
  * @b: char to be filled with.
  * @n: number of memory space to be filled.
  * Return: end of the program.
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (s[i] != '\0' && n > 0)
	{
		s[i] = b;
		i += 1;
		n -= 1;
	}
	return (s);
}
