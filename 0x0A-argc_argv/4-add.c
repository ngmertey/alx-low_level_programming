#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int is_digit, num1, sum = 0;

	for (num1 = 1; num1 < argc; num1++)
	{
		for (is_digit = 0; argv[num1][is_digit]; is_digit++)
		{
			if (argv[num1][is_digit] < '0' || argv[num1][is_digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num1]);
	}

	printf("%d\n", sum);

	return (0);
}
