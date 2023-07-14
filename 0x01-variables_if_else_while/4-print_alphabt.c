#include <stdio.h>
/**
 * main - prints alphabet in lower case except q and e.
 *
 * Return: ends the program.
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		if (alpha[i] != 'e' && alpha[i] != 'q')
			putchar(alpha[i]);
	putchar('\n');
	return (0);
}
