#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h)
	{
	count++;

	/* If the next node points back to an earlier node, we've found a loop */
	if (*h > (*h)->next)
	{
		*h = NULL;
		return (count);
	}

	/* Set temp to the next node and free the current node */
	temp = (*h)->next;
	free(*h);
	*h = temp;
	}

	return (count);
}
