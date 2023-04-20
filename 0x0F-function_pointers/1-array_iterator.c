#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Write a function that executes a function given as
 * a parameter on each element of an array
 * @array: array
 * @size: size of element to print
 * @action: pointer to the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	usigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < siz; i++)
	{
		action(array[i]);
	}
}
