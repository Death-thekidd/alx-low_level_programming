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
	int i, j, k;

	j = 0;

	for (i = 0; i < 9; i++)
	{
		j++;
		for (k = j; k < 10; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
			if (i != 8 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');

	return (0);
}
