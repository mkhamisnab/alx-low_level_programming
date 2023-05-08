#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * a sentence is printed by first function before the main
 * the function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
