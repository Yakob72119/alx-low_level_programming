#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - add node at the beginning
 * @n: new node.
 * @head: the first node.
 *
 * Return: point to the first node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
		(*head)->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
