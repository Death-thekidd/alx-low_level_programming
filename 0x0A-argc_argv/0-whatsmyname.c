#include <stdio.h>
#include <stdlib.h>
/**
* main - prints its name, followed by a new line.
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0
*/
int main(int __attribute__ ((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
