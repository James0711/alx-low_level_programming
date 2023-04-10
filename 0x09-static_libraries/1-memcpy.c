#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: Destination
 * @src: Source
 * @n: size
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
