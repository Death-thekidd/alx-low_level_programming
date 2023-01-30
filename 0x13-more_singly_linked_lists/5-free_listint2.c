#include "lists.h"

/**
* free_listint2 - frees a list
* @head: head of the linked list.
* Return: no return.
*/

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *current_s;

	if (head != NULL)
	{
		for (current_s = *head; (current = current_s) != NULL;)
		{
			current_s = current_s->next;
			free(current);
		}
		*head = NULL;
	}
}
