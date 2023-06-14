#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int i, f, l1, l2, ttl;
	char *concat, *verif1, *verif2;

	verif1 = __strdup(s1), verif2 = __strdup(s2);
	for (i = 0; verif1[i] != '\0'; i++)
		;
	l1 = i;
	for (i = 0; verif2[i] != '\0'; i++)
		;
	l2 = i;
	ttl = l1 + l2 + 1;
	concat = malloc(sizeof(char) * ttl);
	if (concat == NULL)
		return (NULL);
	for (i = 0; verif1[i] != '\0'; i++)
		concat[i] = verif1[i];
	for (f = 0; verif2[f] != '\0'; f++, i++)
		concat[i] = verif2[f];
	concat[i] = '\0';
	return (concat);
}

/**
 * __strdup - returns copied string
 * @str: string to copy
 *
 * Return: pointer
*/
char *__strdup(char *str)
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
