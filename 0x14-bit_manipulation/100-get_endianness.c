#include "main.h"
/**
  * get_endianness - checks for network byte order.
  * Return: Big endian or Little endian
  */
int get_endianness(void)
{
	int n;
	char *c;

	n = 1;
	c = (char *) &n;
	return ((int)*c);
}
