#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to the head node of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
