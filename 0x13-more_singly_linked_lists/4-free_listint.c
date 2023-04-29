#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node of the list to be freed
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}

