#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the address of memory to fill
 * @src: the address of memory to copy from
 * @n: number of bytes to fill
 *
 * Return: a pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
