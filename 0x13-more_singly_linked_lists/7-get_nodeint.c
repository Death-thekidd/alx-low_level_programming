# include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head node.
 * @index:  index of the node, starting at 0
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *current;

	current = head;

	if (head == NULL)
		return (NULL);

	for (n = 0; n != index; n++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}
	return (current);
}
