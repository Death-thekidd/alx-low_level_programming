#include <stdio.h>
/**
* main - Prints a square, followed by a new line.
*
* Return: Always (0) Success
*/
int main(void)
{
	int i;
	char space;

	for (i = 1; i < 101; i++)
	{
		space = 32;
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
				printf("%cFizzBuzz", space);
			else
				printf("%cFizz", space);
		}
		else if ((i % 5) == 0)
		{
			if ((i % 3) == 0)
				printf("%cFizzBuzz", space);
			else
				printf("%cBuzz", space);
		}
		else if (i == 0)
		{
			printf("%d%c", i, space);
		}
		else
		{
			printf("%c%d", space, i);
		}
	}
	printf("\n");
	return (0);

}
