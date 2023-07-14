#include <stdio.h>
/**
 * main - prints alphabet in lower case except q and e.
 *
 * Return: ends the program.
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
