#include <stdio.h>
/**
  * main - the name of the program.
  * @argc: argument counter.
  * @argv: argument string.
  * Return: end of the program.
  */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
