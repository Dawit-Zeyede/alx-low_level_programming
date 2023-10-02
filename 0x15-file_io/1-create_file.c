#include "main.h"
/**
  * create_file - create a function that create a file using c porgram.
  * @filename: file to be created.
  * @text_content: content to be held by a file.
  * Return: end of the program.
  */
int create_file(const char *filename, char *text_content)
{
	int file;
	int len;

	if (filename == NULL)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (len)
	{
		write(file, text_content, len);
		close(file);
		return (1);
	}
	close(file);
	return (-1);
}
