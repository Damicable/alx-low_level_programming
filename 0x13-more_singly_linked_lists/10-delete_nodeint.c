#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node at index of a
 * listink_t.
 * @head: First element in the list pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success) otherwise, -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}



	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
