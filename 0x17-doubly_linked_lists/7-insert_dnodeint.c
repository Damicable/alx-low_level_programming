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
	dlistint_t *new_val, *next, *current;
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
	new_val = malloc(sizeof(dlistint_t));
	if (new_val == NULL)
		return (NULL);
	new_val->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_val;
		new_val->prev = NULL;
	}
	else
	{
		new_val->prev = current;
		next = current->next;
		current->next = new_val;
	}
	new_val->next = next;
	if (new_val->next != NULL)
		new_val->next->prev = new_val;
	return (new_val);
}
