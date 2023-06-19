#include "main.h"
/**
 * _isalpha - a function that check for alphabetic character
 *
 * @c: Parameter character
 * Return: 1 for letter lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
