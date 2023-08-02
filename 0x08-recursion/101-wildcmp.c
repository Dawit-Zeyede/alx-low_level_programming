#include "main.h"
/**
  * wildcmp - compare strings.
  * @s1: string 1 to be compared.
  * @s2: string 2 to be compared.
  * Return: end of the program.
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2));
