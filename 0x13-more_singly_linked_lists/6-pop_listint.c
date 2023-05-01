#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node of a listint_t
 * linked list and returns the head node’s data (n).
 * @head: first element pointer
 *
 * Return: 0, if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (!head || !*head)
		return (0);

	val = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (val);
}
