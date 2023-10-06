#include <stdio.h>

/**
 * main - Entry point
 * Description: A program to print the alphabets in lowercase and uppercase
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabets = 'a';

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
