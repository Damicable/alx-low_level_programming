#include <search_algos.h>

/**
 * jump_search - Function that searches for value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 * Description: Every time you compare a value in the array to the
 * value you are searching for, print this value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t k, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (k = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		k = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", k, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; k < jump && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	return (array[k] == value ? (int)k : -1);
}
