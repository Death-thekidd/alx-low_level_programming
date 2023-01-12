#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum number in the array
 * @max: maximum number in the array
 *
 * Return: an array of integers.
 */
int *array_range(int min, int max)
{
	int i, j, k;
	int *arr;

	if (min > max)
		return (NULL);
	i = (max - min) + 1;
	arr = malloc(i * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (k = 0, j = min; j <= max; j++, k++)
		arr[k] = j;
	return (arr);
}
