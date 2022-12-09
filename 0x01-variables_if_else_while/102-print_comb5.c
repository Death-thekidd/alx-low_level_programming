#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: 0 (Success)
 * Description: Knock yourself out💀
 */
int main(void)
{
	int i, j, k, l, comp1, comp2;


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					comp1 = (i * 10) + j;
					comp2 = (k * 10) + l;
					if (comp1 < comp2)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');

					if (i == 9 && j == 8 && k == 9 && l == 9)
					{
						break;
					}
						putchar(',');
						putchar(' ');
					}
				}
			}

		}
	}
	putchar('\n');

	return (0);
}
