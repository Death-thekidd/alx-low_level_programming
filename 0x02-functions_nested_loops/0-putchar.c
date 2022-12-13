#include "main.h"
/**
* main - Entry Point
* Return: Always (0) Success
* Description: Prints _putchar, followed by a new line.
*/

int main(void)
{
	int arr[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;
	long int size = sizeof(arr) / sizeof(int);
	
	for(i = 0; i < size; i++)
		_putchar(arr[i]);
	_putchar('\n');
	return (0);
}
