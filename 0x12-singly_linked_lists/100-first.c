#include<stdio.h>

void mysteryString(void) __attribute__ ((constructor));

/**
 * mysteryString - prints a string before the main function is executed.
 *
 * return: Nothing.
*/
void mysteryString(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
