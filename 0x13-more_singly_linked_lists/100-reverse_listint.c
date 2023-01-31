#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: head node
 *
 * Return: a node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev   = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next  = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
