#include "main.h"
/**
* print_to_98 - checks for lowercase character.
* @n: The number to count down or up
*
* Return: void
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar(n + 48);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	} else
	{
		while (n <= 98)
		{
			_putchar(n + 48);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
}
