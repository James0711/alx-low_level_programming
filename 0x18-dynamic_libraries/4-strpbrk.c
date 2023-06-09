#include "main.h"
/**
 * _strpbrk - A function that searches a string for any set of bytes
 * @s: string
 * @accept: container
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
