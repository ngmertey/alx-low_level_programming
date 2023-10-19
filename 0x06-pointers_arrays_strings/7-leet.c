#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	char *ptr = str;
	int i;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[0] == "aAeEoOtTlL"[i])
			{
				str[0] = "4433711"[i];
				break;
			}
		}
		str++;
	}

	return (ptr);
}
