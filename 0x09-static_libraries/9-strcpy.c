#include "main.h"
/**
  * *_strcpy - copy the string
  * @dest: copy to
  * @src: copy from
  * Return: end of the program
  */
char *_strcpy(char *dest, char *src)
{
	int n;
	int m;

	n = 0;
	while (*(src + n) != '\0')
	{
		n += 1;
	}
	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	dest[n] = '\0';
	return (dest);
}
