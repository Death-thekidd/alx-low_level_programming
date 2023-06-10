#include <stdio.h>
#define UNUSED(argc) (void)(argc)

/**
 * main - prints it's name followed by a new line.
 * @argc: number of arguments
 * @argv: arguments passes
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
