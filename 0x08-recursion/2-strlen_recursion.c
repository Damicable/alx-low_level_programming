#include "main.h"
/**
 * _strlen_recursion - Write a function that returns
 * The length of a string.
 * @s: string lnput
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		logit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
