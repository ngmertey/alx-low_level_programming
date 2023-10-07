#include <stdio.h>

/**
 * main - Entry point
 * Description: A program to print numbers from 0 to 9
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
