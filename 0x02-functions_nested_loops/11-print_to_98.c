#include "main.h"
void otherwise(int n, int i);
/**
* print_to_98 - checks for lowercase character.
* @n: The number to count down or up
*
* Return: void
*/
void print_to_98(int n)
{
	int i = 0;

	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n <= 9)
				_putchar(n + 48);
			else if (n > 9 && n <= 99)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			} else if (n > 99)
			{
				_putchar((n / 100) + '0');
				i = n % 100;
				_putchar((i / 10) + '0');
				i = n % 10;
				_putchar(i + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	} else
	{
		otherwise(n, i);
	}
	_putchar('\n');
}
/**
* otherwise - Action to perform if n is less
* than 98
* @n: number to check
* @i: temp var
*
* Return: void
*/
void otherwise(int n, int i)
{
	while (n <= 98)
	{
		i = n < 0 ? -n : n;
		if (i <= 9)
		{
			if (n < 0)
				_putchar('-');
			_putchar(i + 48);
		}
		else if (i > 9 && i <= 99)
		{
			if (n < 0)
				_putchar('-');
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		} else if (i > 99)
		{
			if (n < 0)
				_putchar('-');
			_putchar((i / 100) + '0');
			i = i % 100;
			_putchar((i / 10) + '0');
			i = i % 10;
			_putchar(i + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
