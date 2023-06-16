#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Write a function that adds a node to the end of
 * a linked list
 * @head: A double pointer to the beginning of the linked list
 * @n: value to be added to the new node
 *
 * Return: Addressnof the new node, otherwise NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
