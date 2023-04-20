#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 * @array: the array
 * @size: number of element in the array
 * @cmp: the pointer to function to be used
 *
 * Return: 0, if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
