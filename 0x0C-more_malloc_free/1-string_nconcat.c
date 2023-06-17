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
	unsigned int i, f, l1, l2, ttl;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		n = l2;
	ttl = l1 + n;
	concat = malloc(sizeof(char) * (ttl + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		concat[i] = s1[i];
	for (f = 0; f < n; f++, i++)
		concat[i] = s2[f];
	concat[i] = '\0';
	return (concat);
}
