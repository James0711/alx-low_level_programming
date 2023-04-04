#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: a pointer to the byte in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
			n++;
			break;
			}
			if (accept[y] == '\0')
			{
				break;
			}
		}
	}
	return (n);
}
