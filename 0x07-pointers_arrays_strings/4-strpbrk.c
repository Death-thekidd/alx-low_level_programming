#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: buffer to search
 * @accept: buffer to search
 *
 * Return: a pointer.
 */
char *_strpbrk(char *s, char *accept)
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
		if (k == 0)
			return (s + i);
	}
	return (NULL);
}
