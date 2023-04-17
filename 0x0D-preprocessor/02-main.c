#include <stdio.h>

/**
 * main - A program that prints the name of the file it was compile from
 *
 * Return: 0 (success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
