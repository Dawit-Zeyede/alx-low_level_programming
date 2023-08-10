#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * string_nconcat - concatinate string upto n bytes of second string.
  * @s1: first string to be concatinated.
  * @s2: second string to be concatinated up to n bytes.
  * @n: amount of bytes up to which second string is concatinated.
  * Return: end of the program.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;
	char *str;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1 += 1;
	while (s2[len2] != '\0')
		len2 += 1;
	if (n >= len2)
		n = len2;
	len = len1 + n + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[len1 + j] = s2[j];
	str[len1 + j] = '\0';
	return (str);
}
