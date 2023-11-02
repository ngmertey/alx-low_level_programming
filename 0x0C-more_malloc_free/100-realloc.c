#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *my_ptr;
	char *ptr_cpy, *fill;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		my_ptr = malloc(new_size);
		if (my_ptr ==  NULL)
			return (NULL);

		return (my_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cpy = ptr;
	my_ptr = malloc(sizeof(*ptr_cpy) * new_size);

	if (my_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = my_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *ptr_cpy++;

	free(ptr);
	return (my_ptr);
}
