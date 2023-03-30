#include "main.h"
/**
 * *_strncpy - Write a function that copies a string.
 * @dest: The destination of the string
 * @src: The sourc of the string
 * @n: The length of int
 *
 * Return: pointer to the resultig string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
