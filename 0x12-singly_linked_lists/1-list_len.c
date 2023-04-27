#include <stdlib.h>
#include "list.h"

/**
 * list_len - Write a function that returns the number of elements in a linked list_t list.
 * @h: poiter to the list_t list
 *
 * Return: Number of node printed
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->nest;
	}
	return (n);
}
