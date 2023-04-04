#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: string to search from
 * @needle: a substring to be searched for
 * Return: a pointer to the beginning of substring
 * or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
