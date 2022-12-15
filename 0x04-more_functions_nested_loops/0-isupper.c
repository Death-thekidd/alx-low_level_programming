#include "main.h"
/**
* _isupper - checks for uppercase character.
* @c: parameter to check
*
* Return: 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (0);
}
