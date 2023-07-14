#include <stdio.h>
/**
 * main - prints alphabet in lower case.
 *
 * Return: ends the program.
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i <= 0; i--)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
