#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	float total_sum;
	unsigned long num1 = 0, num2 = 1, sum;

	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
