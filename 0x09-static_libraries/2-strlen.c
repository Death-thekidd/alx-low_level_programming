#include "main.h"
/**
* _strlen - returns the length of a string.
* @s: parmater to check
*
* Return: the length of string s
*/

int _strlen(char *s)
{
	char *c;
	int sum, i;

	c = s;
	sum = 0;
	i = 0;
	while (*c != 0)
	{
		c = s + i;
		if (*c != 0)
			sum++;
		i++;
	}
	return (sum);
}
