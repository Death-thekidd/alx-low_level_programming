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
	for (; *s != 0; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (0);
}
