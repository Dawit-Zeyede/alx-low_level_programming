#include "stdio.h"
/**
  * _strcmp - compare length of strings.
  * @s1: first string to be compared.
  * @s2: second string to be compared.
  * Return: end of the program.
  */
int _strcmp(char *s1, char *s2)
{
	int s1_len;
	int s2_len;

	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len] != '\0')
		s1_len += 1;
	while (s2[s2_len] != '\0')
		s2_len += 1;
	if (s1 > s2)
		return (15);
	else if (s1 < s2)
		return (-15);
	else
		return (0);
}
