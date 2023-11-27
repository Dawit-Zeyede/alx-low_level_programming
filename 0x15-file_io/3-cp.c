#include "main.h"
/**
 * main - copies content of a file to another file.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: end of the program.
 */
int main(int ac, char *av[])
{
	int fd1;
	int fd2;
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

