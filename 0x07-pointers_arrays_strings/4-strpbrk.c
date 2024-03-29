#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *acc = accept;

		while (*acc)
		{
			if (*s == *acc)
			{
				return (s);
			}
			acc++;
		}
		s++;
	}
	return (NULL);
}
