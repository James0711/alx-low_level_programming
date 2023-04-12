#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  A function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given
 *
 * @str: string
 * Return: a pointer or NULL
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *bbb;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	
	bbb = malloc((i + 1) * sizeof(char));

	for (j = 0; str[j]; j++)
		bbb[j] = str[j];

	return (bbb);
}
