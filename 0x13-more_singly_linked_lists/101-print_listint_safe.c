#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t
 *
 * Return: number of nodes in the list, otherwise 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *good, *bad;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	good = head->next;
	bad = (head->next)->next;

	while (bad)
	{
		if (good == bad)
		{
			good = head;
			while (good != bad)
			{
				nodes++;
				good = good->next;
				bad = bad->next;
			}

			good = good->next;
			while (good != bad)
			{
				nodes++;
				good = good->next;
			}

			return (nodes);
		}

		good = good->next;
		bad = (bad->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Write a function that prints a listint_t list
 * @head: Head of the listint_t list pointer
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
