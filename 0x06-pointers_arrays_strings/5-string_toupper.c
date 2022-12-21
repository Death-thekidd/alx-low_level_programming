#include "main.h"
/**
* string_toupper - changes all lowercase letters
* of a string to uppercase.
* @str: String
*
* Return: converted string
*/
char *string_toupper(char *str)
{
	int c;

	for (c = 0; *(str + c) != 0; c++)
	{
		if (*(str + c) > 96 && *(str + c) < 123)
			*(str + c) -= 32;
		else
			continue;
	}
	return (str);
}
