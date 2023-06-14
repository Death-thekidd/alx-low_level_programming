#include "main.h"

/**
 * __strdup - creates an copy of a string.
 * @str: string to copy
 *
 * Return: the copy of the string
*/
char *_strdup(char *str)
{
	int i, size;
	char *arr;

	if (str == NULL)
		return ("");
	for (i = 0; str[i] != '\0'; i++)
		;
	size = i++;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	return (arr);
}
