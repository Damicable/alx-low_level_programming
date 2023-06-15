#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Write a function that adds a node to the end of a linked list
 * @head: A double pointer to the beginning of the linked list
 * @n: value to be added to the new node
 *
 * Return: pointer to the new node, otherwise NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_val, *tmp;

	if (head == NULL)
		return (NULL);
	new_val = malloc(sizeof(dlistint_t));
	if (new_val == NULL)
		return (NULL);
	new_val->n = n;
	new_val->next = NULL;
	if (*head == NULL)
	{
		new_val->prev = NULL;
		*head = new_val;
		return (new_val);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_val;
	new_val->prev = tmp;
	return (new_val);
}
