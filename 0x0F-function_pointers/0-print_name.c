#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function that print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
*/

void f(char *name)
{
	printf("%s", name);
}

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
