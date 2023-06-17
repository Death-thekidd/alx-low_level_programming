#include <stdio.h>
#include <stdlib.h>

int is_valid_number(char *num);
int get_digit(char c);
char *multiply(char *num1, char *num2);

/**
 * main - a program that multiplies two arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply(num1, num2);

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);

	free(result);

	return (0);
}

/**
 * is_valid_number - checks if a character is a valid number
 * @num: number to check
 *
 * Return: 0 if false otherwise 1
*/
int is_valid_number(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < 0 || num[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * get_digit - converts a character to an integer
 * @c: character to convert
 *
 * Return: converted integer
*/
int get_digit(char c)
{
	return (c - '0');
}

/**
 * multiply - multiplies two strings
 * @num1: first string
 * @num2: second string
 *
 * Return: the resulting string
*/
char *multiply(char *num1, char *num2)
{
	int len1, len2, mul, sum, i, j, k;
	char *result;
	int *temp;

	for (len1 = 0; num1[len1] != '\0'; len1++)
		;
	for (len2 = 0; num2[len2] != '\0'; len2++)
		;

	result = malloc(sizeof(*result) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	temp = malloc(sizeof(*temp) * (len1 + len2));
	if (temp == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = 0; i < len1 + len2; i++)
		temp[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = get_digit(num1[i]) * get_digit(num2[j]);
			sum = temp[i + j + 1] + mul;

			temp[i + j] += sum / 10;
			temp[i + j + 1] = sum % 10;
		}
	}

	k = 0;
	for (i = 0; i < len1 + len2; i++)
	{
		if (temp[i] != 0 || k != 0)
			result[k++] = temp[i] + '0';
	}
	if (k == 0)
		result[k++] = '0';
	result[k] = '\0';
	free(temp);
	return (result);
}
