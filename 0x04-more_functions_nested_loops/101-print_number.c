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
	unsigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('_');
	}
	k /= 10;
	if (k != 0)
	print_number(K);
	_putchar((unsigned int) n % 10 + '0');

}
