#include <stdio.h>

/**
 * main - Entry point
 * Description: A program to print the numbers in base 16 in lowercase
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabets;
	char num;

	for (num  = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
