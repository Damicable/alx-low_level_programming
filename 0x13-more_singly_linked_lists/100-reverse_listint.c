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
	listint_t *before = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}

	*head = before;

	return (*head);
}
