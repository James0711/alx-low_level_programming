#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, di;
	char *conct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";

	i = 0;
	while (s1[i] != '\0')
		i++;
	di = 0;
	while (s2[di] != '\0')
		di++;
	conct = malloc((i + di + 1) * sizeof(char));

	if (conct == NULL)
		return (NULL);
	i = di = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[di] != '\0')
	{
		conct[i] = s2[di];
		i++, di++;
	}
	conct[i] = '\0';
	return (conct)
}
