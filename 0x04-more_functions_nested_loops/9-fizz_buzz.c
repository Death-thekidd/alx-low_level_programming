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
		space = (i == 100) ? 0 : 32;
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
				printf("FizzBuzz%c", space);
			else
				printf("Fizz%c", space);
		}
		else if ((i % 5) == 0)
		{
			if ((i % 3) == 0)
				printf("FizzBuzz%c", space);
			else
				printf("Buzz%c", space);
		}
		else
		{
			printf("%d%c", i, space);
		}
	}
	printf("\n");
	return (0);

}
