#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: a pointer to the byte in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				y++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
