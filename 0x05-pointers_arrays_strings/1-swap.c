#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
