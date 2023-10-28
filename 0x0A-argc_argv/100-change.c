#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cedis, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cedis = atoi(argv[1]);

	while (cedis > 0)
	{
		coins++;
		if ((cedis - 25) >= 0)
		{
			cedis -= 25;
			continue;
		}
		if ((cedis - 10) >= 0)
		{
			cedis -= 10;
			continue;
		}
		if ((cedis - 5) >= 0)
		{
			cedis -= 5;
			continue;
		}
		if ((cedis - 2) >= 0)
		{
			cedis -= 2;
			continue;
		}
		cedis--;
	}

	printf("%d\n", coins);

	return (0);
}
