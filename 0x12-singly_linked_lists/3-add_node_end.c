#include "lists.h"
#include  <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dupct;
	int length = 0;
	list_t *anew, *tail;

	anew = malloc(sizeof(list_t));
	if (anew == NULL)
		return (NULL);

	dupct = strdup(str);
	if (str == NULL)
	{
		free(anew);
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	anew->str = dupct;
	anew->len = length;
	anew->next = NULL;

	if (*head == NULL)
		*head = anew;
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = anew;
	}
	return (*head);
}
