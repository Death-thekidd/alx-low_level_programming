#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers.
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int n1, n2;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	n1 = atoi(argv[1]), n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);

	exit(EXIT_SUCCESS);
}
