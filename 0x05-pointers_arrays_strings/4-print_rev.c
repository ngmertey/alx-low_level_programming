#include "main.h"

/**
 * _strlen - compute the length of a string
 * @s: the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * print_rev - print a string in reverse followed by a new line
 * @s: the string to print
 */

void print_rev(char *s)
{
	int len = _strlen(s), a;

	for (a = len - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
