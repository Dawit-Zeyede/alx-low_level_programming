#include "main.h"
/**
  * cap_string - lower cases to upper case.
  * @str: string to be upper cased.
  * Return: end of the program.
  */
char *cap_string(char *str)
{
	int i;
	int len;
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	len = 1;
	while (str[len] != '\0')
	{
		for (i = 0; i < 26 && ((str[len - 1] == ' ') || (str[len - 1] == '\n') || (str[len -1] == '.') || (str[len -1] == ',') || (str[len -1] == '!') || (str[len -1] == '\t')); i++)
		{
			if (str[len] == low[i])
				str[len] = upper[i];
		}
		len += 1;
	}
	return (str);
}
