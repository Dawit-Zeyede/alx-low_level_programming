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
	unsigned int i;

	for (i = 0; s[i] == '\0' && i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
