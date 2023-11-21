#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *anew, *cp = *head;
	unsigned int node = 0;

	anew = malloc(sizeof(listint_t));
	if (anew == NULL)
		return (NULL);

	anew->n = n;
	if (idx == 0 || *head == NULL)
	{
		anew->next = cp;
		*head = anew;
		return (anew);
	}
	while (node < (idx - 1))
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);

		cp = cp->next;
		node++;
	}

	if (cp == NULL)
	{
		free(anew);
		return (NULL);
	}
	anew->next = cp->next;
	cp->next = anew;

	return (anew);
}
