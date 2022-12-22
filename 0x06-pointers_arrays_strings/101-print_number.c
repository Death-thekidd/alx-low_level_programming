#include "main.h"
/**
* print_number - boilerplate for headstart
* @n: number
*
* Return: void
*/
void print_number(int n)
{
	unsigned int n1 div, c;

	if (n < 0)
	{
		_putchar('-');
		n1 = n * -1;
	}
	else
		n1 = n;

	for (div = n1, c = 1; div > 9; div /= 10, c *= 10)
		;
	for (; c >= 1; c /= 10)
		_putchar(((n1 / c) % 10) + 48);
}
