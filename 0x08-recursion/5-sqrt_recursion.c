#include "main.h"
/**
 * _sqrt_recursion - Write a function that returns
 * the natural square root of a number.
 * @n: Number value
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
