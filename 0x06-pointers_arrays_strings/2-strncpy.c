#include "main.h"
/**
  * _strncpy - copies src to dest
  * @dest: string space to be copied on
  * @src: string space to be copied
  * @n: no of bytes to be copied
  * Return: end of the program
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
