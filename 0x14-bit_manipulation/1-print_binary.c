#include "main.h"

/**
 * print_binary - Write a function that prints the binary representation
 * of a number
 * @n: Number of binary to be printed
 */

void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int rep;

	for (j = 63; j >= 0; j--)
	{
		rep = n >> j;

		if (rep & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');

}
