#include "function_pointers.h"

/**
 * array_iterator - performs operatoons on
 * each element of an array
 * @array: the given array
 * @size: the size of the array
 * @action: action to perform on each element of the array
 *
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    ssize_t i;

    if (array != NULL && action != NULL)
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
