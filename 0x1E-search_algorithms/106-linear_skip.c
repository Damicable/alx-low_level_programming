#include <search_algos.h>

/**
 * linear_skip - function that searches for a value in a soorted skip list
 * @list: A pointer to the head of the skpi list to search
 * @value: Value to search for
 *
 * Return: A pointer to the first node where value is located,
 * if value is not present in the list or head is NULL - NULL
 * Description: Print the compared value using square root of list size as
 * jump step
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
