#include "main.h"
/**
  * _strlen - length of string.
  * @s: adress of a string to be counted.
  * Return: end of the program.
  */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len += 1;
		s += 1;
	}
	return (len);
}
