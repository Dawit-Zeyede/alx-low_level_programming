#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: file where a text is appended.
 * @text_content: text to be appended.
 * Return: end of the program.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int fd;
	int appended;
	int count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			count += 1;
		
		appended = write(filename, text_content, count);
		if (appended == -1)
			return (-1);
	}
	close (fd);
	return (1);
}
