#include "lists.h"

/**
 * find_listint_loop - write a function that finds the loop in
 * linked list
 * @head: listint_t first node
 *
 * Return: The address of the node where the loop starts, otherwise 0
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *end = head;
	listint_t *start = head;

	if (!head)
		return (NULL);

	while (end && start && start->next)
	{
		start = start->next->next;
		end = end->next;
		if (start == end)
		{
			end = head;
			while (end != start)
			{
				end = end->next;
				start = start->next;
			}
			return (start);
		}
	}

	return (NULL);
}
