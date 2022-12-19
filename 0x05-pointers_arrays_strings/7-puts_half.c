#include "main.h"
#include <stdio.h>
/**
* puts_half - prints half of a string, followed by a new line.
* @str: parmater to check
*
* Return: void
*/

void puts_half(char *str)
{
	int count, i;

	count = 0;
	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	i = (count % 2 == 0) ? count / 2 : (count - 1) / 2;
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');

}
