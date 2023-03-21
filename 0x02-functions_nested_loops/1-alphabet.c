#include "main.h"
/**
 * print_alphabet: Function that prints the alphabet in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
