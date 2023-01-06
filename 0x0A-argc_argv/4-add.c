#include <stdio.h>
#include <stdlib.h>
/**
* main - adds positive numbers.
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int i, j, sum;

	if (argc < 2)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	i = 1, sum = 0;
	while (argc > 1)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		sum += atoi(argv[i++]);
		argc--;
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
