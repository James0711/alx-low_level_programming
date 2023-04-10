#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - A program that adds positive numbers
 *
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: positve numbers
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = *(argv + i);
		int j = 0;

		while (*(arg + j) != '\0')
		{
			if (*(arg + j) < '0' || *(arg + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
