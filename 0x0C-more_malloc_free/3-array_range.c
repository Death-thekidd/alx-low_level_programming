#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min number to add
 * @max: maximum number to add
 *
 * Return: pointer to the created array
*/
int *array_range(int min, int max)
{
	int init, count, i;
	int *array;

	if (min > max)
		return (NULL);
	count = max - min + 1;
	array = malloc(sizeof(*array) * count);
	if (array == NULL)
		return (NULL);
	for (init = min, i = 0; i < count; init++, i++)
		array[i] = init;
	return (array);
}
