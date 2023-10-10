#include <search_algos.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - This searches for a value in an array of integers
 * using a linear search algorithm.
 * @array: The array of numbers to search
 * @size: The size of the array
 * @value: The exact number to look for
 *
 * Return: Index of the found value otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);

}
