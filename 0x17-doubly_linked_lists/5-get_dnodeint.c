#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current_node = head;

	/* Traverse the doubly-linked list to the desired index */
	for (i = 0; current_node != NULL && i < index; i++)
	{
		current_node = current_node->next;
	}

	/* Check if the node at the desired index exists */
	if (i == index && current_node != NULL)
	{
		return (current_node);
	}
	else
	{
		return (NULL);
	}
}
