#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - s is a function that inserts a new node at a
 * given position
 * @h: A double pointer to the beginning of the linked list
 * @idx: index at which the new node is to be inserted.
 * @n: data for the new node
 *
 * Return: pointer to the new node, otherwise NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int k;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (k = 0; k < idx - 1 && current != NULL; k++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
