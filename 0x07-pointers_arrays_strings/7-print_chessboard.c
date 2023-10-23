#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int num, num2;

	for (num = 0; num < 8; num++)
	{
		for (num2 = 0; num2 < 8; num2++)
		{
			_putchar(a[num][num2]);
		}
		_putchar('\n');
	}
}
