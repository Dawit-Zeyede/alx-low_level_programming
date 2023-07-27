#include "main.h"
/**
  * rot13 - rot13 encoding.
  * @str: string to be rot13 encoded.
  * Return: end of the program.
  */
char *rot13(char *str)
{
	int i;
	int len;
	char low[26] = "abcdefghijklmnopqrstuvwxyz";

	len = 0;
	while (str[len] != '\0')
	{
		for (i = 0; i < 26; i++)
		{
			if (i > 13)
				i = 0;
			str[len] = low[i + 13];
		}
		str += 1;
	}
	return (str);
}
