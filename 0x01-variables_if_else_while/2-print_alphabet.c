#include <stdio.h>

/**
 * main - Entry point
 * Description: A program to print the alphabets
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');

	return (0);
}
