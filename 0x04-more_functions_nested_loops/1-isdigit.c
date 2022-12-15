#include "main.h"
/**
* _isdigit - checks for uppercase character.
* @c: parameter to check
*
* Return: 1 if c is a digit and 0 otherwise
*/
int _isupper(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
