#include "main.h"
/**
* print_diagonal - draws a straight line in the terminal
* n number of times.
* @n: parameter to consider
*
* Return: void
*/
void print_diagonal(int n)
{
	int i, j;
	int m = n > 0 ? n : 0;

	if (m <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < m; i++)
		{
			for (j = i; j > 0; j--)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
