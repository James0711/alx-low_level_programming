#include "main.h"
/**
 * print_sign - A function that prints the sign of a number
 *
 * @n: Parameter character
 * Return: 1 if its greater than zero, 0 is zero and
 * -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
