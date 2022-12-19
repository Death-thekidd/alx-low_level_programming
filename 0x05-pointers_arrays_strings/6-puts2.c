#include "main.h"
/**
* puts2 - prints every other character of a string,
* starting with the first character, followed by a new line.
* @str: parmater to check
*
* Return: void
*/

void puts2(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != 0)
	{
		if (count % 2 == 0)
			_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
