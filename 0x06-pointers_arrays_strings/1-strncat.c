#include "main.h"
/**
  * _strncat - concatinate up to n.
  * @dest: string appendent
  * @src: string to be appended
  * @n: no of bytes to be appended
  * Return: end of the program
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = 0;
	while (dest[len] != '\0')
		len += 1;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
