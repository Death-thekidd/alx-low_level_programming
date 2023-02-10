#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: name of file to create
 * @letters : number of letters to read
 *
 * Return: numer of chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, wri, op;
	char *buffer, *buf;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	r = read(op, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, r);
	if (!op || !r || !wri || wri != r)
	{
		free(buffer);
		return (0);
	}
	close(op);
	free(buffer);
	return (i);
}
