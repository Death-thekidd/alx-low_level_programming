#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: head node
 * @index: index for the node to delete
 * 
 * Return: 1 if suceeded and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *head_s;
	listint_t *curr;
	listint_t *prev;


	if (*head == NULL)
		return (-1);
	prev = NULL;
	curr = *head;	
	for (i = 0; i < index; i++)
	{
		if (curr->next == NULL)
			return (-1);
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
	head_s = *head;
	if (curr == head_s)
	{
		*head = head_s->next;
		free(head_s);
	}
	else
	{
		prev->next = curr->next;
		free(curr);
	}
	return (1);
}
