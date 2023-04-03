#include "main.h"
/**
 * _memcpy - Write a function that copies memory area.
 * @dest: Stored memory location
 * @src: copied memory  location
 * @n: Number of n bytes
 *
 * Return: Copied memory with n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
		return (dest);

}
