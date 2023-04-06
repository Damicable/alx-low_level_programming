#include "main.h"
/**
 * is_palindrome - Write a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: String input
 * Return: 1
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
