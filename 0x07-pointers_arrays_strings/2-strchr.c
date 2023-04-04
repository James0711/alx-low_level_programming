#include "main.h"
/**
 * _strchr - A function that locates a charater in a string
 * @s: String
 * @c: A character
 * Return: a pointer to a string
 */
char *_strchr(char *s, char c)
{
	int x = 0;
	
	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		return (&s[x]);
	}
	return (0);
}
