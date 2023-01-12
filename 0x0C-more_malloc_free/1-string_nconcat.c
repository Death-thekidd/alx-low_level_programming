#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * @n: number
 *
 * Return: A buffer that holds the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, sum;
	char *cat;

	i = 0, j = 0;
	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i) != 0; i++)
			;
	}
	if (s2 != NULL)
	{
		for (j = 0; *(s2 + j) != 0; j++)
			;
	}
	j = (n >= j) ? j : n;
	sum = i + j;
	cat = malloc(sum + 1);
	if (cat == NULL)
		return (NULL);
	k = 0;
	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i) != 0; i++, k++)
			*(cat + k) = *(s1 + i);
	}
	if (s2 != NULL)
	{
		for (l = 0; l < j; l++, k++)
			*(cat + k) = *(s2 + l);
	}
	*(cat + k) = 0;
	return (cat);
}
