#include <stdio.h>

/**
 * main - Print the alphabet in lower case, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);


}
