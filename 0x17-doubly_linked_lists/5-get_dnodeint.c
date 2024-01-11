#include "lists.h"

/**
 * get_dnodeint_at_index - get the node
 * @index: index of the node.
 * @head: the first node.
 *
 * Return: index. address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	cursor = head;
	while (i < index)
	{
		if (cursor == NULL)
			return (NULL);
		cursor = cursor->next;
		i++;
	}
	return (cursor);
}
