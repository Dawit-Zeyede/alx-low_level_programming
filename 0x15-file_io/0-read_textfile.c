#include "main.h"
/**
  * read_textfile - reads a text file and prints it to the stdout.
  * @filename: file name.
  * @letters: letters to be read and print.
  * Return: actual number of letters it read and print.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t red;
	ssize_t written;
	ssize_t file;
	
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file = open(filename, 0_RDONLY);
	if (file == -1)
		return (0);
	red = read(file, buffer,letters);
	if (red == -1)
		return (0);
	written = write(STDOUT_FILENO, buffer, r);
	if (written == -1)
		return (0);
	close(file);
	free(buffer);
	if (red != written)
		return (0);
	return (written);
}
