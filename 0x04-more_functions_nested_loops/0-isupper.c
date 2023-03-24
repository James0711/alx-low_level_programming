#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 for uppercase or 0 for others
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
