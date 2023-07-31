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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s += 1;
	}
	return (NULL);
}
