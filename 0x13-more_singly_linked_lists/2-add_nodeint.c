#include "lists.h"

/**
 * add_nodeint - Write a function that adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to the first node in the list.
 * @n: New nde content.
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
