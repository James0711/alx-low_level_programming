#include "main.h"
#include <stdlib.h>

/**
 * count_word - function to count the number of words in a string
 * @s: string
 * Return: number of words
 */

int count_word(char *s)
{
	int a, b, flag;

	b = 0;
	flag = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);
}

/**
 * strtow - A function that splits a string into words
 * @str: string
 * Return: A pointer or NULL
 */

char **strtow(char *str)
{
	int i, words, start, end;
	int len = 0, k = 0, c = 0;
	char **matrix, *tmp;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc((words + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc((c + 1) * sizeof(char));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}
