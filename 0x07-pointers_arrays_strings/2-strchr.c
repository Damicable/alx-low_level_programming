#include "main.h"
/**
 * _strchr - Write a function that locates a character in a string.
 * @s: String
 * @c: Element in the string
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int 1 = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);

}
