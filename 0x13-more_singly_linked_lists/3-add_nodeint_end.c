#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: structure
 * @n: data
 *
 * Return: new structure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *add_s;

	add_s = malloc(sizeof(listint_t));
	if (add_s == NULL)
		return (NULL);
	add_s->n = n;
	if (*head == NULL)
	{
		add_s->next = *head;
		*head = add_s;
		return (*head);
	}
	add = *head;
	add_s->next  = NULL;
	for (; add->next != NULL; add = add->next)
		;
	add->next = add_s;
	return (*head);
}
