#include "main.h"

/**
 *_strcat - Concatenate the string pointed to by @src,including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_length = 0;

	while (dest[i])
	{
		dest_length++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dest_length++] = src[i];
	}

	return (dest);
}
