#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name, followed by a new line
 *
 * @argc: Number of argument
 * @argv: Argument array
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argc;/*unused parameter*/

	printf("%s\n", argv[0]);
	return (0);
}
