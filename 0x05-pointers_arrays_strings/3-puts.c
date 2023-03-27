#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line,
 * to stdout
 * @str: The string to print
 * Return: The length of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n')
}
