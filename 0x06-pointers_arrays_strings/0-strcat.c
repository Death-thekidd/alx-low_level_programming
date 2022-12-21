#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
* _strcat - concatenates two strings.
* @dest: string to concatenate to
* @src: string to concatenate from
*
* Return: pointer to the concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int c, i;

	for (c = 0; *(dest + c) != '\0'; c++)
		;
	for (i = 0; *(src + i) != 0; i++, c++)
	{
		*(dest + c) = *(src + i);
	}
	*(dest + c) = '\0';
	return(dest);
}
