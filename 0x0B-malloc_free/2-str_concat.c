#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * str_concat - concatinate and reallocate.
  * @s1: first string to be concatinate.
  * @s2: second string to be concatinate.
  * Return: end of the program.
  */
char *str_concat(char *s1, char *s2)
{
	char *fullstr;
	int len1;
	int len2;
	int len;
	int i;
	int j;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1 += 1;
	while (s2[len2] != '\0')
		len2 += 1;
	len = len1 + len2 + 1;
	fullstr = malloc(sizeof(char) * len);
	while (fullstr != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1 == NULL)
				continue;
			fullstr[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s2 == NULL)
				continue;
			fullstr[len1 + j] = s2[j];
		}
		fullstr[len + j] = '\0';
		return (fullstr);
	}
	return (NULL);
}
