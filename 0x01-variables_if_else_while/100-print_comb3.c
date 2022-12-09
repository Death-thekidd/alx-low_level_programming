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
	int i, j;


	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');

	return (0);
}
