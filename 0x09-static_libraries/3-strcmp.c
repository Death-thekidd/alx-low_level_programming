#include "main.h"
/**
* _strcmp - compares two strings.
* @s1: parameter to compare
* @s2: parameter to compare
*
* Return: an int
*/
int _strcmp(char *s1, char *s2)
{
	int c, i;

	for (i = 0, c = 0; c == 0; i++)
	{
		if ((*(s1 + i) == 0) && (*(s2 + i) == 0))
			break;
		c = (*(s1 + i)) - (*(s2 + i));
	}
	return (c);
}
