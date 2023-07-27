#include "main.h"
/**
  * rot13 - rot13 encoding.
  * @str: string to be rot13 encoded.
  * Return: end of the program.
  */
char *rot13(char *str)
{
	int i;
	int j;
	char decode[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 52; i++)
		{
			if (str[j] == decode[i])
			{
				str[j] = encode[i];
				break;
			}
		}
	}
	return (str);
}
