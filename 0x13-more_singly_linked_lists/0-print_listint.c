#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to structure
 * 
 * Return: number of nodes in the lists
 */
size_t print_listint(const listint_t *h)
{
    size_t num;
    for (num = 0; h != NULL; h = h->next, num++)
        printf("%d\n", h->n);
    return (num);
}