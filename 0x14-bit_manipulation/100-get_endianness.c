#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 *
 * Return: 0 if big endia, 1 if small endian
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
