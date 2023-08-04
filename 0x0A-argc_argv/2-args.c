#include <stdio.h>
#include "main.h"
/**
  * main - prints all argumets.
  * @argc: numbers of arguments.
  * @argv: array of argrments,
  * Return: end of the program.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
