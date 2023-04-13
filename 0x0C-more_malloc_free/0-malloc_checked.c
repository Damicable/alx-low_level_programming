#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Write a function that allocates memory using malloc
 *
 * @b: Memory to be allocated
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (0);
}
