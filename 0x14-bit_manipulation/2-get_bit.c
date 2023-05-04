#include "main.h"

/**
 * get_bit - Write a function that returns the value of a bit at a given
 * index
 * @n: Number in value of bits to be returned
 * @index: index of the bit
 *
 * Return: Bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);

}
