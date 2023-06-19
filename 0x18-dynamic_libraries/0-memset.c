#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: Starting address
 * @b: The chosen value
 * @n: The number of bytes to fill
 *
 * Return: New array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);

}
