#include "main.h"
/**
* leet - encodes a string into 1337.
* @str: String.
*
* Return: pointer to encoded string
*/
char *leet(char *str)
{
	int c, i;
	char cc;

	int arr[5][3] = {
		{97, 65, 52},
		{101, 69, 51},
		{111, 79, 48},
		{116, 84, 55},
		{108, 76, 49},
	};

	for (c = 0; *(str + c) != 0; c++)
	{
		cc = *(str + c);
		for (i = 0; i < 5; i++)
		{
			if (cc == *(arr[i] + 0) || cc == *(arr[i] + 1))
				*(str + c) = *(arr[i] + 2);
		}
	}
	return (str);
}
