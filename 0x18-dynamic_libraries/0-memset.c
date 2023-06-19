#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: A memory area
 * @b: A constant byte
 * @n: Size of the byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
