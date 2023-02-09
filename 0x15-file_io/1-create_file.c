#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to be created
 * @text_content: text to write to file
 *
 * Return: 1 on success and 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc;

	if (filename == NULL)
		return (-1);
	fdesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (!fdesc)
		return (-1);
	if (text_content != NULL)
	{
		for (; *text_content != 0; text_content++)
			write(fdesc, text_content, 1);
	}
	close(fdesc);
	return (1);
}
