#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - matches characters in a memory area.
  * @s: string to be checked.
  * @accept: string to be matched.
  * Return: end of the program.
  */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while(*accept)
		{
			if (*s == *accept)
				return (s);
			accept += 1;
		}
		s += 1;
	}
	return (NULL);
}
