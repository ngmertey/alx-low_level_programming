#include <stdio.h>

/**
 * main - Entry point
 * Description: A program to print the alphabets except q and e
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
			putchar(alphabets);
		}
		alphabets++;
	}
	putchar('\n');

	return (0);
}
