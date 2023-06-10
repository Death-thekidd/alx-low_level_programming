#include <stdio.h>
#define UNUSED(argc) (void)(argc)

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: arguments passes
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	UNUSED(argc);
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv = argv + 1;
	}

	return (0);
}
