#include "main.h"
/**
 * _islower - function to check and print lowercase character
 *
 * @c: Characters in ASCII code
 *
 * Return: 1 for lowercase character and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
