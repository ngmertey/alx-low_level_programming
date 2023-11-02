#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using at
 * most an inputted number of bytes
 * @s1: the first string.
 * @s2: the second string.
 * @n: the max number of s2 to concat to s1
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int length = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);

	length = 0;
	for (i = 0; s1[i]; i++)
		result[length++] = s1[i];

	for (i = 0; s2[i]; i++)
		result[length++] = s2[i];

	result[length] = '\0';
	return (result);
}
