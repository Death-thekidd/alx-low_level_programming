#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to structure
 *
 * Return: number of nodes in the lists
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; h = h->next, num++)
		;
	return (num);
}
