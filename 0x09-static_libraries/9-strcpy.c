#include "main.h"
#include <stdio.h>
/**
* _strcpy -  copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest.
* @dest: parmater to copy src to
* @src: parameter to copy to dest
*
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
