#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: 0 (Success)
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 */
int main(void)
{
	int i, j, k, l, m;

	j = 0;

	for (i = 0; i < 9; i++)
	{
		l = 1;
		j = i + 1;
		for (k = j; k < 9; k++)
		{
			l = k + 1;
			for (m = l; m < 10; m++)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(m + '0');
				if (i != 7 || k != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');

	return (0);
}
