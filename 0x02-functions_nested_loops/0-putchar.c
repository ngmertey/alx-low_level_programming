#include "main.h"

/*
 * main - Entry point
 * Description: Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *str = "_putchar";

	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');

	return (0);
}
