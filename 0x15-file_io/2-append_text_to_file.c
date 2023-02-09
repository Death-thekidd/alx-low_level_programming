#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: text to append file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc;

	if (filename == NULL)
		return (-1);
	fdesc = open(filename, O_WRONLY | O_APPEND, 0600);
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
