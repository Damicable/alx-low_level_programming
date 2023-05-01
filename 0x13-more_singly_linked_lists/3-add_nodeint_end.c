#include "lists.h"

/**
 * add_nodeint_end - Write a function that adds a new node at the end
 * of a listint_t list.
 * @head: pointer to the first node of the listint_t
 * @n: Content of the new node.
 *
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *temp = *head;

	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = n_node;

	return (n_node);

}
