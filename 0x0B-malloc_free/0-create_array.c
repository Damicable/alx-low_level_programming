#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to assign
 * Return: A pointer to the array or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
