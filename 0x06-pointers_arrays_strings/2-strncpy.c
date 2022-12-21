#include "main.h"
#include <stdio.h>
/**
* _strncpy - copies a string.
* @dest: string to copy to
* @src: string to copy from
* @n: number
*
* Return: pointer to the copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c, c2, i;

	for (c2 = 0; *(src + c2) != '\0'; c2++)
		;
	for (i = 0; i < n; i++, c++)
	{
		if (i < c2)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
	}
	return (dest);
}
