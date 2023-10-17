#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
	{
		len++;
	}

	for (i = 5; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
