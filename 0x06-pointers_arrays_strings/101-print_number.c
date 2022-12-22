#include "main.h"
/**
* print_number - boilerplate for headstart
* @n: number
*
* Return: void
*/
void print_number(int n)
{
	int div, c;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (div = n, c = 1; div > 9; div /= 10, c *= 10)
		;
	for (; c >= 1; c /= 10)
		_putchar(((n / c) % 10) + 48);
}
