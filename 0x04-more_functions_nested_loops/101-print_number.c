#include "main.h"
/**
 * print_number - A function that prints the largest number
 * of a set of prime mumbers. using _putchar
 * @n: The largest integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
