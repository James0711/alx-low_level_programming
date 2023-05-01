#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tmp = head, *loop = head;

	while (tmp && loop)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;

		if (loop == tmp)
		{
			loop = loop->next;

			while (loop != tmp)
			{
				printf("[%p] %d\n", (void *)loop, loop->n);
				count++;
				loop = loop->next;
			}
			printf("-> [%p] %d\n", (void *)loop, loop->n);
			break;
		}
		if (tmp == NULL)
		{
			tmp = head;
			loop = loop->next;
		}
	}
	return (count);
}
