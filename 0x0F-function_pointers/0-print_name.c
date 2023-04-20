#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name
 * using pointer to functions
 * @name: string to add
 * @f: pointer to function
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
