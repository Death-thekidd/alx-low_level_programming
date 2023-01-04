#include "main.h"

/**
 * _strlen_recursion - check the length of 
 * @s: String
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
