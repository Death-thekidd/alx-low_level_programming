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
	int i, f, size, l1, l2, ttl;
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
	for (i = 0; verif1[i] != '\0'; i++)
		concat[i] = verif1[i];
	for (f = 0; verif2[f] != '\0'; f++, i++)
		concat[i] = verif2[f];
	concat[i] = '\0';
	return (concat);
}
