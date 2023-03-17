#include <stdio.h>

/**
 * main - print the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
