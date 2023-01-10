#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @c: character to initialize with
 * @size: the size of the array to create
 *
 * Return: an array of chars or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);
	while(size--)
		arr[size] = c;
	return (arr);
}
