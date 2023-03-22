#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: Parameter Character
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
