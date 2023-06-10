#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two args and prints result
 *@argc: Variable carrying amount of command line arguments passed
 *@argv: Array of all command line arguments
 *Return: ZERO if successful or 1 if failed
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
