#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head node
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *del;
	listint_t *res;

	if (*head == NULL)
		return (0);
	del = *head;
	num = del->n;
	res = del->next;
	free(del);
	*head = res;
	return (num);
}
