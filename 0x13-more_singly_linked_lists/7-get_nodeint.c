#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns nth node of a listint_t list
 * @head: Linked list first node
 * @index: Return node index
 *
 * Return: NULL, if the coe does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;

	}

	return (temp ? temp : NULL);
}
