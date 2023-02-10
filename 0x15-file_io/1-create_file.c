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
	int fdesc, len, wri;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fdesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	wri = write(fdesc, text_content, len);
	if (!fdesc || !wri)
		return (-1);
	close(fdesc);
	return (1);
}
