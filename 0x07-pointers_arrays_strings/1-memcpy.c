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

	for (i = 0; i < n; i++)
	{
		dest = src;
		dest += 1;
		src += 1;
	}
	return (dest);
}
