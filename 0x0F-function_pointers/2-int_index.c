#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: size of the array
 * @cmp: function to compare the values in the array
 *
 * Return: the index of the value found else (-1)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
