#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: arguments passes
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv = argv + 1; 
	}

	return (0);
}
