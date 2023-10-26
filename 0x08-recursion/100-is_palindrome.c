#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
/**
 * finding_strlen - Returns the length of a string.
 * @a: The string to be measured.
 *
 * Return: The length of the string.
 */
int finding_strlen(char *a)
{
	int length = 0;

	if (*(a + length))
	{
		length++;
		length += finding_strlen(a + length);
	}

	return (length);
}

/**
 * checking_palindrome - Checks if a string is a palindrome.
 * @p: The string to be checked.
 * @length: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int checking_palindrome(char *p, int length, int i)
{
	if (p[i] == p[length / 2])
		return (1);

	if (p[i] == p[length - i - 1])
		return (checking_palindrome(p, length, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int x = 0;
	int length = finding_strlen(s);

	if (!(*s))
		return (1);

	return (checking_palindrome(s, length, x));
}
