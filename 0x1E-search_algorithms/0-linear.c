#include "search_algos.h"

/**
 * linear_search - This searches for a value in an array of integers
 * using a linear search algorithm.
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: first index where the value is located, otherwise -1 if
 * the value not found
 * Description: Print the value every time you compare a value in
 * the array to the value searching for
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
