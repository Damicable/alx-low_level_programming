#include <stdio.h>

void first(void) _attribute_ ((constructor));

/**
 * first - Write a function that prints You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n before the main function is executed.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
