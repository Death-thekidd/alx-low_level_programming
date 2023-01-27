#include "lists.h"

/**
 * print_list - prints a list
 * @h: pointer to first item in the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	list_t *print;

	print = h;
	if (h == NULL)
		exit(1);
	i = 0;
	while (print->next != NULL)
	{
		if (print->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s", print->len, print->str);
		}
		print = print->next;
		i++;
	}
	return (i);
}
