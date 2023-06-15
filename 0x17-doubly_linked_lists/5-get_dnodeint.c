#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a dlistint_t
 * linked list.
 * @head: A pointer to the beginning of the list
 * @index: index of the node to be retrieved
 *
 * Return: pointer to the indexed node, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (k = 0; k < index; k++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
