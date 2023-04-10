#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments passed into it
 *
 * @argc: Number of argument
 * @argv: Argument array
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
