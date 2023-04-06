#include "main.h"
/**
 * _pow_recursion - A function that returns the value of x raised
 * to power of y
 * @x: number
 * @y: power of x
 * Return: -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
