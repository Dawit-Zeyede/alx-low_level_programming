#include "main.h"
#include <stdio.h>
/**
  * _strcat - concatinate two strings
  * @dest: address of the first string
  * @src: address of the second string
  * Return: end of the program
  */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len += 1;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
