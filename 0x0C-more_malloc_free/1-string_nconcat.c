#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of chars to concatenate from s2
 *
 * Return: pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, f, l1, l2, ttl, n_chk;
	char *concat, *verif1, *verif2;

	verif1 = __strdup(s1), verif2 = __strdup(s2);
	for (i = 0; verif1[i] != '\0'; i++)
		;
	l1 = i;
	for (i = 0; verif2[i] != '\0'; i++)
		;
	l2 = i;
	if (n >= l2)
		n_chk = l2;
	else
		n_chk = n;
	ttl = l1 + n_chk + 1;
	concat = malloc(sizeof(char) * ttl);
	if (concat == NULL)
		return (NULL);
	for (i = 0; verif1[i] != '\0'; i++)
		concat[i] = verif1[i];
	for (f = 0; f < n_chk; f++, i++)
		concat[i] = verif2[f];
	concat[i] = '\0';
	if (*verif1 != '\0')
		free(verif1);
	if (*verif2 != '\0')
		free(verif2);
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
