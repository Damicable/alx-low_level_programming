#include "search_algos.h"

/**
 * jump_list - This is a function that searches for a value in a
 * sorted list of integers using jump search algorithm
 * @list: Pointer to the head of the road of the list to search.
 * @size: Number of nodes in the list.
 * @value: Value to search for
 *
 * Return: A pointer to the first node where value is located, otherwise NULL
 * if the head of a list is NULL
 * Discription: Print the compared value everytime you compare a value in the
 * list to the value you are searching
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < steps; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->indes < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
