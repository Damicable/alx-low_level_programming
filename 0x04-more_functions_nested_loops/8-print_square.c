#include "main.h"
/**
 * print_square - Write a function that use the chracter #
 * to print a square.
 * @size: the number of times a new line is printed
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
