#include "lists.h"

/**
 * free_dlistint - empty doubly linked list.
 * @head: first node.
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor;

	if (head == NULL)
		return;
	cursor = head;
	while (cursor->next->next != NULL)
		cursor = cursor->next;
	while (cursor != NULL)
	{
		free(cursor->next);
		cursor = cursor->prev;
	}
	free(head);
}
