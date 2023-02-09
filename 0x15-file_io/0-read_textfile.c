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
	int val;
	ssize_t i;
	char *buffer, *buf;

	buffer = malloc(letters);
	val = open(filename, O_RDONLY, 0666);
	if (!val || buffer == NULL)
		return (0);
	read(val, buffer, letters);
	for (i = 0, buf = buffer; *buf != 0; buf++, i++)
		printf("%c", *buf);
	close(val);
	free(buffer);
	return (i);
}
