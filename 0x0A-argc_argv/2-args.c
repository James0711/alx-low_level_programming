#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it receives
 *
 * @argc: Number of argument
 * @argv: Argument array
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));

	return (0);
}
