#includ "lists.h"

/**
 * listint_len - Write a function that returns the number of elements
 * in a linked listint_t list
 * @h: The number of elements in the linked listint_t to be returned
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t elem_num = 0;

	while (h)
	{
		elem_num++;
		h = h->next;
	}

	return (elem_num);
}
