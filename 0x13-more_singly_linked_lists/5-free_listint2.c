#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *c_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		c_node = (*head)->next;
		free(*head);
		*head = c_node;
	}
	head = NULL;
}
