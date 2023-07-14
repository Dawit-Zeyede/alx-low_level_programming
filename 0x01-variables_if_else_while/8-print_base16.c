#include <stdio.h>
/**
 * main - prints alphabet in lower case.
 *
 * Return: ends the program.
 */
int main(void)
{
	char alpha[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
