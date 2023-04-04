#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: a pointer to the byte in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (a);
			}
			s++;
		}
	}
	return (a);
}
