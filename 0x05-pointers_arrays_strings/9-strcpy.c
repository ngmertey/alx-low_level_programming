#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_index = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest = '\0';

	return (dest_index);
}
