#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */

void free_list(list_t *head)
{
	list_t *c_node = head;

	while (c_node != NULL)
	{
		list_t *nxt_node = c_node->next;

		free(c_node->str);
		free(c_node);
		c_node = nxt_node;
	}
}
