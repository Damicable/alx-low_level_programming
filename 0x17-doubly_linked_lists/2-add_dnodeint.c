#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - This function is to add a new node at the beginning of the linked list
 * @head: A double pointer to the beginning of the linked list
 * @n: value to be added to the new node
 *
 * Return: pointer to the new node, otherwise NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_val;

	if (head == NULL)
		return (NULL);
	new_val = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new_val->n = n;
	new_val->prev = NULL;
	new_val->next = *head;
	*head = new_val;
	if (new_val->next != NULL)
		(new_val->next)->prev = new_val;
	return (new_val);
}
