#include <stdio.h>
/**
  * main - prints _putchar
  *
  * Return: end of the file
  */

int main(void)
{
	int i = 0;
	char cha[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		putchar(cha[i]);
	}
	putchar('\n');
	return (0);
}
