#include "main.h"
int _strlen(char *);
int _cmp(char *, int, int);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: String
 *
 * Return: 1 if a string is a palindrome and 0 if not..
 */
int is_palindrome(char *s)
{
	return (_cmp(s, 0, _strlen(s) - 1));
}

/**
 * _strlen - returns the length of a string.
 * @s: String
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
* _cmp - compares each character of the string.
* @s: string
* @n1: smallest iterator.
* @n2: biggest iterator.
* Return: .
*/
int _cmp(char *s, int n1, int n2)
{
	if (s[n1] == s[n2])
	{
		if ((n1 == n2) || (n1 == n2 + 1))
			return (1);
		return (_cmp(s, n1 + 1, n2 - 1));
	}
	return (0);
}
