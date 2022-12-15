#include <stdio.h>
/**
* main - Prints a square, followed by a new line.
*
* Return: Always (0) Success
*/
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if ((i % 3) == 0)
				printf("FizzBuzz ");
			else
				printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);

}
