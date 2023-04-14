#include "main.h"
#include <stdlib.h>

/**
 *  _realloc - A function that reallocates a memory block using malloc and free
 *
 *  @ptr: pointer
 *  @old_size: old size of the allocated memory
 *  @new_size: new size of the allocated memory
 *
 *  Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int r;
	char *ptr1;
	char *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (r = 0; r < new_size; r++)
			ptr1[r] = old_ptr[r];
	}
	if (new_size > old_size)
	{
		for (r = 0; r < old_size; r++)
			ptr1[r] = old_ptr[r];
	}

	free(ptr);
	return (ptr);
}
