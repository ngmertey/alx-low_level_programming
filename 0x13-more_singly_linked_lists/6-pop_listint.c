#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *c_node;
	int ans;

	if (*head == NULL)
		return (0);

	c_node = *head;
	ans = (*head)->n;
	*head = (*head)->next;

	free(c_node);

	return (ans);
}
