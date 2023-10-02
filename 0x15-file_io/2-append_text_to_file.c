#include "main.h"
/**
  * append_text_to_file - adds text to a given file.
  * @filename: file name where the text is added.
  * @text_content: text to be added.
  * Return: end of the program.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len;

	if (filename != NULL)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (len >= 0)
	{
		write(file, text_content, len);
		close(file);
		return (1);
	}
	close(file);
	return (1);
}
