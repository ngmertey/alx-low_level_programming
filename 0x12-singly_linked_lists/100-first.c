#include <stdio.h>

void tortoise_hare(void)__attribute__((constructor));

/**
 * tortoise_hare - Prints a string before the main function is executed.
*/

void tortoise_hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
