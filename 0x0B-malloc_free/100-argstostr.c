#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * argstostr - concatinate everything.
  * @ac: integer to be concatinate.
  * @av: address of a pointer a string to be concatinated is located.
  * Return: end of the program.
  */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int len;
	char *str;

	len = 0;
	k = 0;
	while (ac != 0 && av != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				len += 1;
		}
		len += ac;
		str = malloc((sizeof(char) * len) + 1);
		if (str == NULL)
			return (NULL);
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				str[k] = av[i][j];
				k += 1;
			}
			if(str[k] == '\0')
			{
				str[k++] = '\0';
			}
		}
		return (str);
	}
	return (NULL);
}
