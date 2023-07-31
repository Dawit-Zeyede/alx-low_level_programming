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
	int j;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if(s[i] == accept[j])
				return (s);
			accept += 1;
		}
		s += 1;
	}
	return (NULL);
}
