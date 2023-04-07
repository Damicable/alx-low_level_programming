
#include "main.h"
/**
 * is_prime_number - Write a function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: Input integer
 * Return: 1 if input integer is a prime number, otherwsie 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (actual_prime(2, n));
}

/**
 * actual_prime - calculates if a number is prime number
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i < 2 || i % n == 0)
		return (0);
	else if (n > i / 2)
		return (1);
	else
		return (actual_prime(n + 1, i));
}
