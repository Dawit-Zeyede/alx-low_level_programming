#include "main.h"
/**
  * _atoi - coverter
  * @s: string to be converted.
  * Return: end of the program.
  */
int _atoi(char *s)
{
	int i;
	int d;
	int n;
	int len;
	int f;
	int digit;

	i = d = n = 0;
	len = f = digit = 0;
	while (s[len] != '\n')
	{
		len += 1;
	}
	while ((i < len) && (f == 0))
	{
		if (s[i] == '-')
			++d;
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = (n * 10) + digit;
			f = 1;
			if ((s[i + 1] < '0') || (s[i + 1] > '9'))
				break;
			f = 0;
		}
		i += 1;
	}
	if (f == 0)
		return (0);
	return (n);
}
