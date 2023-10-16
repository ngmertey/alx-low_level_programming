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
 * rev_string - Reverse a string
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int len = _strlen(s), a;
	char tempo;

	for (a = 0; a < len / 2; a++)
	{
		tempo = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = tempo;
	}
}
