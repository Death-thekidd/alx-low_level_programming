#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: buffer to search
 * @accept: buffer to search
 *
 * Return: length.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k;

	for (i = 0, k = 0; *(s + i) != 0; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
			{	k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
