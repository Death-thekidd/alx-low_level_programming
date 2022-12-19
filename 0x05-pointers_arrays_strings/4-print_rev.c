#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: parmater to print in reverse
*
* Return: void
*/

void print_rev(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != 0)
	{
		count++;
	}
	count--;
	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
