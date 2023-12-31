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
	int len;

	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len += 1;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];
	cpy[i] = '\0';
	return (cpy);
}
