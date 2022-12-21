#include "main.h"
#include <stdio.h>
/**
* _strncat - concatenates two strings.
* @dest: string to concatenate to
* @src: string to concatenate from
* @n: number
*
* Return: pointer to the concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, c2, i;

	for (c = 0; *(dest + c) != '\0'; c++)
		;
	for (c2 = 0; *(src + c2) != '\0'; c2++)
		;
	c2 = n > c2 ? c2 : n;
	for (i = 0; i < c2; i++, c++)
	{
		*(dest + c) = *(src + i);
	}
	*(dest + c) = '\0';
	return(dest);
}
