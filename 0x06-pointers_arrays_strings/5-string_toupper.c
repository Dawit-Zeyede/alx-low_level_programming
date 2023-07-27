#include "main.h"
/**
  * string_toupper - lower cases to upper case.
  * @str: string to be upper cased.
  * Return: end of the program.
  */
char *string_toupper(char *str)
{
	int i;
	int len;
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	len = 0;
	while (str[len] != '\0')
	{
		for (i = 0; i < 26; i++)
		{
			if (str[len] == low[i])
				str[len] = upper[i];
		}
		len += 1;
	}
	return (str);
}
