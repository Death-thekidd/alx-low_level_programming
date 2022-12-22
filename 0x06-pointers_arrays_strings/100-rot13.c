#include "main.h"
/**
* rot13 - encodes a string using rot13.
* @str: String
*
* Return: void
*/
char *rot13(char *str)
{
	int c, i;
	char cc;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; *(str + c) != 0; c++)
	{
		cc = *(str + c);
		for (i = 0; i < 52; i++)
		{
			if ((cc == *(arr1 + i)))
				*(str + c) = *(arr2 + i);
		}
	}
	return (str);
}
