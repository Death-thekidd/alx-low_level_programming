#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer variable to reallocate
 * @old_size: previous size of the pointer
 * @new_size: current size of the pointer
 *
 * Return: returns the reallocated pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == 0)
		return (NULL);
	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		memcpy(new_mem, ptr, (old_size < new_size) ? old_size : new_size);
    	free(ptr);
	}
	return (new_mem);
}
