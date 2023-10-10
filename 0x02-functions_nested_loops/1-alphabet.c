#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase followed by a new line
 *
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
