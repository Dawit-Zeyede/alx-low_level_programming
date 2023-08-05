#include "main.h"
/**
  * _strspn - len of the same byte.
  * @s: string to be checked.
  * @accept: string to be matched.
  * Return: end of the program.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	unsigned int i;

	len = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len += 1;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}
		s += 1;
	}
	return (len);
}
