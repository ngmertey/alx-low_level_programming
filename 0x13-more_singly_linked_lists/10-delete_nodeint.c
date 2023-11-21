#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c_node, *tempo = *head;
	unsigned int node = 0;

	if (tempo == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tempo->next;
		free(tempo);
		return (1);
	}

	while (node < (index - 1))
	{
		if (tempo->next == NULL)
			return (-1);

		tempo = tempo->next;
		node++;
	}
	c_node = tempo->next;
	tempo->next = c_node->next;
	free(c_node);
	return (1);
}
