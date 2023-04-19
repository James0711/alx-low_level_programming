#include "function_pointers.h"
#include <stdio.h>

/**
 * f - prints a string
 * @name: the string to print
 *
 * Return: void
 */
void f(char *name)
{
	printf("%s", name);
}

/**
 * print_name - A function that print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * @f: function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
