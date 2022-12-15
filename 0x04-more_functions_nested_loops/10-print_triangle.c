#include "main.h"
/**
* print_triangle - Prints a triangle, followed by a new line.
* @size: parameter to consider
*
* Return: void
*/
void print_triangle(int size)
{
	int i, j, k, l, n;
	int m = size > 0 ? size : 0;

	if (m <= 0)
		_putchar('\n');
	else
	{
		for (i = m, n = 1; i > 0; i--, n++)
		{
			for (j = i; j > 1; j--)
				_putchar(32);
			l = i - (i - n);
			for (k = 0; k < l; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
