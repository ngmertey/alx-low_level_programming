#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long prime_number = 612852475143, num;

	while (num < (prime_number / 2))
	{
		if ((prime_number % 2) == 0)
		{
			prime_number /= 2;
			continue;
		}

		for (num = 3; num < (prime_number / 2); num += 2)
		{
			if ((prime_number % num) == 0)
				prime_number /= num;
		}
	}

	printf("%ld\n", prime_number);

	return (0);
}
