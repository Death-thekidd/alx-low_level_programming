#include "lists.h"
/**
* add_node - adds a new node at the beginning
* of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
*
* Return: address of the head.
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t num;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (num = 0; str[num]; num++)
		;
	new->len = num;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
