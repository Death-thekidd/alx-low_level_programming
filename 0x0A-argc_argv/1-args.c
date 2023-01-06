#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the number of arguments passed into it.
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0
*/
int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
