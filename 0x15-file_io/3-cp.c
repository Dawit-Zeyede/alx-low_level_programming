#include "main.h"
/**
 * main - copies the content of a file to antoher file.
 * @argc: number of arguments.
 * @argc: string array of arguments.
 * Return: end of the program.
 */
int main(int argc, char *argv[])
{
	int file1;
	int file2;
	int success;
	int chars;
	int nwr;
	char buffer[1024];

	chars = 1024;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file1 file2");
		exit (97);
	}
	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file1 == -1)
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
	else if (file2 == -1)
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
	while (chars == 1024)
	{
		chars = read(file1, buffer, 1024);
		if (chars == -1)
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		nwr = write(file2, buffer, chars);
		if (nwr == -1)
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
	}
	success = close(file1);
	if (success == -1)
	{
		dprintf(STRERR_FILENO, "Error: can't close fd %d\n", file1);
		exit (100);
	}
	success = close(file2);
	if (success == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file1);
		exit (100);
	}
	return (0);
}
