#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of size bytes
 * @size: size of elements
 *
 * Return: return allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int tt_size;
	void *mem;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	tt_size = nmemb * size;
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	memset(mem, 0, tt_size);
	return (mem);
}
