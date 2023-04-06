#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - A function that finds the natural number of an inputted number
 * @num: number
 * @root: root to be tested
 * Return: -1 if num has a sqrt else the sqrt
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural square root
 * of a number
 *
 * @n: a number
 * Return: -1 if n != sqrt
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
