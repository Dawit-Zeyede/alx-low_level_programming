#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * _strdup - reallocates the string and copy its value.
  * @str: string to be reallocated and copies.
  * Return: end of the program.
  */
char *_strdup(char *str)
{
	char *cpy;
	int i;

	cpy = malloc(sizeof(str));
	while (str != NULL)
	{
		if (cpy == NULL)
			return (NULL);
		for (i = 0; str[i] != '\0'; i++)
			cpy[i] = str[i];
		return (cpy);
	}
	return (NULL);
}
