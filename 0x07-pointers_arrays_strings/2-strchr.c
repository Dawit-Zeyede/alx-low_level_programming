#include "main.h"
#include <stddef.h>
/**
  * _strchr - locate the address of a character in a string.
  * @s: the address of the first character.
  * @c: character to be located.
  * Return: end of the program.
  */
char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
		s += 1;
	}
	return (NULL);
}
