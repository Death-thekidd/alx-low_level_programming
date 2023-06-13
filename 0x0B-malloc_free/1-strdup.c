#include "main.h"

/**
 * _strdup - creates an copy of a string.
 * @str: string to copy
 *
 * Return: the copy of the string
*/
char *_strdup(char *str)
{
    int i;
    char *arr;

    if (size == 0)
        return(NULL);
    arr = malloc(sizeof(char) * size);
    if (arr == NULL)
        return(NULL);
    for (i = 0; i < size; i++)
        arr[i] = c;
    arr[i - 1] = '\0';
    return (arr);
}
