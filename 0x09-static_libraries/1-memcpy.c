#include "main.h"
/**
  * _memcpy - copy memory address.
  * @dest: memory area to be overridden.
  * @src: memory area to be copied.
  * @n: amount of memory area to be copied.
  * Return: end of the program.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
