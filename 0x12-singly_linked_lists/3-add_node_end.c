#include "lists.h"

/**
* add_node_end - adds a new node at the end
* of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
*
* Return: address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	size_t num;
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (num = 0; str[num]; num++)
		;
	new->len = num;
	new->str = strdup(str);
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
