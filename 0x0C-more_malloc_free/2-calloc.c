#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: the size of each element
 *
 * Return: a buffer to the memory created
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ca;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ca = malloc(nmemb * size);
	if (ca == NULL)
		return (NULL);
	return (ca);
}
