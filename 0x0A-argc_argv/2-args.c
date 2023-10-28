#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int my_arg;

	for (my_arg = 0; my_arg < argc; my_arg++)
	{
		printf("%s\n", argv[my_arg]);
	}

	return (0);
}
