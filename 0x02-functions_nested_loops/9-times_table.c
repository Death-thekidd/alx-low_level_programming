#include "main.h"
/**
* times_table - checks for lowercase character.
* @c: The character to check
*
* Return: 1 if c is lowercase and 0 otherwise
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			k = i * j;
			_putchar(44);
			if (k < 10)
			{
				_putchar(' ');
                         	_putchar(' ');
				_putchar(k + '0');
			} else
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				k = k % 10;
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
