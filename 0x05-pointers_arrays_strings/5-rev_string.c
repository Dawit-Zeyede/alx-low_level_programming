#include "main.h"
/**
  * rev_string - change  a string in a reverse.
  * @s: string to be reverse changed.
  * Return: end of the program.
  */
void rev_string(char *s)
{
	int len;
	int i;
	char cha = s[0];

	len = 0;
	while (s[len] != '\0')
	{
		len += 1;
	}
	for (i = 0; i < len; i++)
	{
		len -= 1;
		cha = s[i];
		s[i] = s[len];
		s[len] = cha;
	}
}
