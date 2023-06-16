#include "lists.h"
#include <<stdlib.h>

/**
 * free_dlistint - This is a function that frees a dlistint_t list
 * @head: A pointer to the beginning of the linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}