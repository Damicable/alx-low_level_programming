#include "main.h"

/**
 * clear_bit - Write a function that sets the value of a bit to 0 at
 * a given index
 * @n: Number in value of bits to set
 * @index: The index starting from 0 of the bit to set
 * Return: 1 if successful, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
