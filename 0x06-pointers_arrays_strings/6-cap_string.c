#include "main.h"
/**
* cap_string - capitalizes all words of a string.
* @str: String
*
* Return: converted string
*/
char *cap_string(char *str)
{
	int c, i, count;
	char cc;

	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	count = sizeof(sep) / sizeof(int);

	if (*(str + 0) > 96 && *(str + 0) < 123)
		*(str + 0) -= 32;
	for (c = 0; *(str + c) != 0; c++)
	{
		cc = *(str + c);
		for (i = 0; i < count; i++)
		{
			if (cc == *(sep + i))
			{
				if (*(str + (c + 1)) > 96 && *(str + (c + 1)) < 123)
					*(str + (c + 1)) -= 32;
				break;
			}
		}

	}
	return (str);
}
