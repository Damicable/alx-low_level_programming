#include "lists.h"

/**
 * reverse_listint - Write a function that reverses a listint_t
 * linked list
 * @head: Linked list pointer
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *next = first;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = next;
	}

	*head = first;

	return (*head);
}
