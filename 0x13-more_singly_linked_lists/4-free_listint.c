#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
*/
void free_listint(listint_t *head)
{
	listint_t *c_node;

	while (head != NULL)
	{
		c_node = head->next;
		free(head);
		head = c_node;
	}
}
