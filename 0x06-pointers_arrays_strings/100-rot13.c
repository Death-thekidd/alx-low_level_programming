#include "main.h"
/**
* rot13 - encodes a string using rot13.
* @str: String
*
* Return: void
*/
char *rot13(char *str)
{
	int c;
	char cc;

	for (c = 0; *(str + c) != 0; c++)
	{
		cc = *(str + c);
		if ((cc > 64 && cc < 78) || (cc > 96 && cc < 110))
			*(str + c) += 13;
		else if ((cc > 77 && cc < 91) || (cc > 109 && cc < 123))
			*(str + c) -= 13;
	}
	return (str);
}
