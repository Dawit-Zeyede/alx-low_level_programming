#include "main.h"
/**
 * create_file - a function to create a file.
 * @filename: a name for a new file.
 * @text_content: a NULL terminated string to write to the file.
 * Return: End of the program.
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int fd;
	int written;
	int count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		count += 1;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (-1);
	written = write(fd, text_content, count);
	if (written == -1)
		return (-1);
	close(fd);
	return (1);
}
