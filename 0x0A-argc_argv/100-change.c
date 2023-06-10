#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an
 * amount of money.
 * @argc: number of arguments
 * @argv: arguments passes
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int num, cent, itr, temp, length;
	int cent_coin[4] = {25, 10, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	length = 4;
	num = atoi(argv[1]);
	for (itr = 0, cent = 0; itr < length; itr++)
	{
		for (temp = num; (temp - cent_coin[itr]) >= 0; cent++)
		{
			temp -= cent_coin[itr];
			num = temp;
		}
	}

	printf("%d\n", cent);

	return (0);
}
