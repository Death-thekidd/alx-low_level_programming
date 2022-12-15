#include "main.h"
/**
* print_line - draws a straight line in the terminal
* n number of times.
* @n: parameter to consider
*
* Return: void
*/
void print_line(int n)
{
	int i;
	int m = n > 0 ? n : 0;
	
	if (m <= 0)
		_putchar('\n');
	for (i = 0; i < m; i++)
		_putchar(95);
	_putchar('\n');
}
