#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dupct;
	int length = 0;
	list_t *anew;

	anew = malloc(sizeof(list_t));
	if (anew == NULL)
		return (NULL);

	dupct = strdup(str);
	if (dupct == NULL)
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
	anew->next = *head;

	*head = anew;
	return (anew);
}
