#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first number of bits to return.
 * @m: second number of bits to return
 * Return: Bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int rep;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		rep = exclusive >> j;
		if (rep & 1)
			count++;

	}

	return (count);
}
