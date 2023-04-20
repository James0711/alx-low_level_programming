#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: 0 if n == 0 otherwise the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int b, sum = 0;

	va_start(ap, n);

	for (b = 0; b < n; b++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
