#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: The length of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0; /* start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
