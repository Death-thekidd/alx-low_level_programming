#include "main.h"
/**
* _puts -  prints a string, followed by a new line, to stdout.
* @str: parmater to print
*
* Return: void
*/

void _puts(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != 0)
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
