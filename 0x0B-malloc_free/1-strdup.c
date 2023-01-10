#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *str2;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		;
	i++;
	str2 = malloc(sizeof(*str) * i);
	if (str2 == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		str2[i] = str[i];
	str2[i] = str[i];
	return (str2);

}
