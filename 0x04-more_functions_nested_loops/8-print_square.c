#include "main.h"
/**
* print_square - Prints a square, followed by a new line.
* @size: parameter to consider
*
* Return: void
*/
void print_square(int size)
{
	int i, j;
	int m = size > 0 ? size : 0;

	if (m <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
