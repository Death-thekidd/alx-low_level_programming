#include <stdio.h>
#include <stdlib.h>
/**
* main - prints all arguments it receives.
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc--)
		printf("%s\n", argv[i++]);
	exit(EXIT_SUCCESS);
}
