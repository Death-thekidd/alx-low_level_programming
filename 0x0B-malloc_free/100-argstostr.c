#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments passed
 * @av: arguments passed
 *
 * Return: pointer to the new string
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, chlnt, nwlm;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	chlnt = 0, nwlm = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, chlnt++)
			;
		nwlm++;
	}
	chlnt++;
	concat = malloc(sizeof(char) * (chlnt + nwlm));
	if (concat == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, chlnt++, k++)
			concat[k] = av[i][j];
		concat[k++] = '\n';
	}
	concat[k] = '\0';

	return (concat);
}
