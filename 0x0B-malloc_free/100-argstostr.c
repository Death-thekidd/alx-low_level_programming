#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
			k++;
	}
	k = k + (1 * ac);
	k++;
	str = malloc(sizeof(char) * k);
	if (str == NULL)
		return (NULL);
	for (i = 0, l = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++, l++)
			str[l] = av[i][j];
		str[l++] = '\n';
	}
	str[l] = 0;
	return (str);
}
