#include "main.h"
/**
  * read_textfile - reads a text file and prints it to the stdout.
  * @filename: file name.
  * @letters: letters to be read and print.
  * Return: actual number of letters it read and print.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t red;
	ssize_t written;
	char *file;

	if (!filename)
		return (0);
	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	if (!file)
		return (0);
	red = read(filedes, file, letters);
	written = write(1, file, red);
	close (filedes);
	free(file);
	return (written);
}
