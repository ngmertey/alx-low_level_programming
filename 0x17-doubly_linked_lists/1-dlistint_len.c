#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* Traverse the doubly-linked list and count the elements */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
