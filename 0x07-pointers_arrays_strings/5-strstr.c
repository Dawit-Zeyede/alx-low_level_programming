#include "main.h"
/**
  * _strstr - locates a string within a string.
  * @haystack: string to be checked.
  * @needle: string to be located.
  * Return: end of the program.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h += 1;
			n += 1;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (0);
}
