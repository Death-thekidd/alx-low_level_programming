#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to fill
 * @b: character to fill with
 * @n: number of bytes to fill
 *
 * Return: a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
