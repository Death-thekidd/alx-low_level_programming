#include "main.h"

/**
 * _strchr - searches for the occurence of
 * the character c in the buffer s
 * @s: buffer to search
 * @c: character
 *
 * Return: a pointer.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != 0; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
