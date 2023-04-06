#include "main.h"

/**
 * wildcmp - A function that compares two strings and returns 1
 * f the strings can be considered identical, otherwise return 0
 *
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * Return: 1 if the string is identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
