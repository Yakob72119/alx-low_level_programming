#include "lists.h"

/**
 * dlistint_len - count number of nodes of a doubly linked list.
 * @h: point to the first node.
 *
 * Return: nodes number.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t count = 0;

	if (h == NULL)
		return (count);
	tmp = (dlistint_t *)h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
