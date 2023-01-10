#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: Sting 1
 * @s2: String 2
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, sum;
	char *cat;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != 0; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != 0; j++)
			;
	}
	sum = i + j + 1;
	cat = malloc(sizeof(*s1) * sum);
	if (cat == NULL)
		return (NULL);
	k = 0;
	if (s1 != NULL)
	{
		for (i = 0, k = 0; s1[i] != 0; i++, k++)
			cat[k] = s1[i];
	}
	if (s2 == NULL)
	{
		for (j = 0; s2[j] != 0; j++, k++)
			cat[k] = s2[j];
	}
	cat[sum - 1] = 0;
	return (cat);
}
