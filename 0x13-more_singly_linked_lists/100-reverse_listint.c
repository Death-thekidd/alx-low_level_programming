#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: head node
 *
 * Return: a node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node;

	next_node = *head;

	while (next_node != NULL)
	{
		next_node  = next_node->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev;
	return (*head);
}
