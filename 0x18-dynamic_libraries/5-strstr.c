#include "main.h"
/**
  * _strstr - locates a string within a string.
  * @haystack: string to be checked.
  * @needle: string to be located.
  * Return: end of the program.
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *world;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for(j = 0; needle[j] != '\0'; j++)
		{
			if(haystack[i] == needle[j])
			{
				*world = needle[j];
				world += 1;
			}
		}
	}
	return (world);
}
