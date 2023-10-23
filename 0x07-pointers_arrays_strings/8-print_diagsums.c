#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int p_sum = 0;
	int s_sum = 0;

	for (i = 0; i < size; i++)
	{
		p_sum += a[i * size + i];
		s_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", p_sum, s_sum);
}
